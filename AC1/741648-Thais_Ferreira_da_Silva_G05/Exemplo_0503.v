// -------------------------
// Exemplo_0503 - NAND
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// f5_gate
// m a b s
// 0 0 0 1
// 1 0 1 0 <- a+b'
// 2 1 0 1
// 3 1 1 1

// -------------------------

module f5a ( output s, input a, input b );

wire nand_a,nand_b, nand_bb;

nand NAND1(nand_a,a);
nand NAND2(nand_b,b);
nand NAND3(nand_bb,nand_b);
nand NAND4(s, nand_a,nand_bb);

endmodule // f5a

module f5b ( output s, input a, input b );

assign s = ~(~(~(b&b)&~(b&b))&~(a&a));

endmodule // f5b

module test_f5;
reg x;
reg y;
wire a, b;
f5a moduloA ( a, x, y );
f5b moduloB ( b, x, y );

initial
begin : main
$display("Exemplo_0503 - Thaís Ferreira da Silva - 741648");
$display("   x    y    a    b");

$monitor("%4b %4b %4b %4b", x, y, a, b);
x = 1'b0; y = 1'b0;
#1 x = 1'b0; y = 1'b1;
#1 x = 1'b1; y = 1'b0;
#1 x = 1'b1; y = 1'b1;
end
endmodule // test_f5