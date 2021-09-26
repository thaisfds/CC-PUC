// -------------------------
// Exemplo_0805 - COMPLEMENTO DE 2
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// -------------------------
// ADD
// -------------------------
module ADD (output s1, output s0, input a, input v);
// descrever por portas
xor XOR1 ( s0, a, v);
and AND1 ( s1, a, v);
endmodule // ADD

module test_complemtento;
// ------------------------- definir dados
reg [5:0] x;
wire [5:0] carry; // “vai-um”
wire [5:0] soma;
ADD ADD0 ( carry[0], soma[0], ~x[0], 1'b1 );
ADD ADD1 ( carry[1], soma[1], ~x[1], carry[0] );
ADD ADD2 ( carry[2], soma[2], ~x[2], carry[1] );
ADD ADD3 ( carry[3], soma[3], ~x[3], carry[2] );
ADD ADD4 ( carry[4], soma[4], ~x[4], carry[3] );
ADD ADD5 ( carry[5], soma[5], ~x[5], carry[4] );

// ------------------------- parte principal
initial begin
        $display("Exemplo0805 - Thaís Ferreira da Silva - 741648");
        $display("Test ALU’s complemtento de 2");
        $monitor("%6b = %6b", x, soma);
        #1 x = 6'b000001;
        #1 x = 6'b000011;
        #1 x = 6'b000111;
    end
endmodule // test_complemtento