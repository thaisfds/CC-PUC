// -------------------------
// Exemplo_0804 - COMPARADOR XOR
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// -------------------------
// comparador XOR
// -------------------------
module compXOR (output s0, 
    input a4, input a3, input a2, input a1, input a0, 
    input b4, input b3, input b2, input b1, input b0);

    wire x0,x1,x2,x3,x4;
    
    xor XOR0(x0,a0,b0);
    xor XOR1(x1,a1,b1);
    xor XOR2(x2,a2,b2);
    xor XOR3(x3,a3,b3);
    xor XOR4(x4,a4,b4);
    or OR1(s0,x0,x1,x2,x3,x4);

endmodule // compXOR

module test_compXOR;

// ------------------------- definir dados
reg [4:0] x;
reg [4:0] y;
wire igauldade; // se 0 é igual
compXOR C1(igualdade,x[4],x[3],x[2],x[1],x[0],y[4],y[3],y[2],y[1],y[0]);


// ------------------------- parte principal
initial begin
        $display("Exemplo_0804 - Thaís Ferreira da Silva - 741648");
        $display("Test ALU’s comparador XOR");
        $monitor("%5b - %5b = %1b", x, y, igualdade);
        #1 x = 5'b00100; y = 5'b00100;
        #1 x = 5'b00010; y = 5'b00000;
        #1 x = 5'b00001; y = 5'b00001;
    // projetar testes do diferenciador completo
    end
endmodule // test_compXOR