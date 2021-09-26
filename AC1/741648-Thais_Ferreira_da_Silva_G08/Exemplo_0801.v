// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// -------------------------
// half adder
// -------------------------
module halfAdder (output s1, output s0, input a, input b);
// descrever por portas
xor XOR1 ( s0, a, b );
and AND1 ( s1, a, b );
endmodule // halfAdder

// -------------------------
// full adder
// -------------------------
module fullAdder ( output s1, output s0, input a, input b, input carryIn );
wire s2,s3,s4;
halfAdder HA0(s2,s3,a,b);
halfAdder HA1(s4,s0,carryIn,s3);
or OR1(s1,s2,s4);
endmodule // fullAdder
module test_fullAdder;


// ------------------------- definir dados
reg [3:0] x;
reg [3:0] y;
wire [3:0] carry; // “vai-um”
wire [3:0] soma;
fullAdder FA0 ( carry[0], soma[0], x[0], y[0], 1'b0 );
fullAdder FA1 ( carry[1], soma[1], x[1], y[1], carry[0] );
fullAdder FA2 ( carry[2], soma[2], x[2], y[2], carry[1] );
fullAdder FA3 ( carry[3], soma[3], x[3], y[3], carry[2] );

// ------------------------- parte principal
initial begin
        $display("Exemplo0801 - Thaís Ferreira da Silva - 741648");
        $display("Test ALU’s full adder");
        $monitor("%4b + %4b = %4b", x, y, soma);
        #1 x = 4'b0000; y = 4'b0010;
        #1 x = 4'b0000; y = 4'b0011;
        #1 x = 4'b0000; y = 4'b0100;
    // projetar testes do somador completo
    end
endmodule // test_fullAdder