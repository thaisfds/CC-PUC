// -------------------------
// Exemplo_0802 - FULL DIFF
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// -------------------------
// half Diff
// -------------------------
module halfDiff (output s1, output s0, input a, input b);
// descrever por portas
wire s2;
not NOT1 (s2,a);
xor XOR1 ( s0, a, b );
and AND1 ( s1, a, s2 );
endmodule // halfDiff

// -------------------------
// full Diff
// -------------------------
module fullDiff ( output s1, output s0, input a, input b, input carryIn );
wire s2,s3,s4;
halfDiff HA0(s2,s3,a,b);
halfDiff HA1(s4,s0,s3,carryIn);
or OR1(s1,s2,s4);
endmodule // fullDiff
module test_fullDiff;


// ------------------------- definir dados
reg [5:0] x;
reg [5:0] y;
wire [5:0] carry; // “vai-um”
wire [5:0] diff;
fullDiff FA0 ( carry[0], diff[0], x[0], y[0], 1'b0 );
fullDiff FA1 ( carry[1], diff[1], x[1], y[1], carry[0] );
fullDiff FA2 ( carry[2], diff[2], x[2], y[2], carry[1] );
fullDiff FA3 ( carry[3], diff[3], x[3], y[3], carry[2] );

// ------------------------- parte principal
initial begin
        $display("Exemplo0802 - Thaís Ferreira da Silva - 741648");
        $display("Test ALU’s full Diff");
        $monitor("%4b - %4b = %4b", x, y, diff);
        #1 x = 6'b000100; y = 6'b000000;
        #1 x = 6'b000010; y = 6'b000000;
        #1 x = 6'b000001; y = 6'b000000;
    // projetar testes do diferenciador completo
    end
endmodule // test_fullDiff