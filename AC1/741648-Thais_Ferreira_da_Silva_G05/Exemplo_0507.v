// -------------------------
// Exemplo_0507 - XOR com NAND
// Nome: Thaís Ferreira da Silva
// Matricula: 741648
// -------------------------

// f5_gate
// m a b s
// 0 0 0 0
// 1 0 1 1 <- a^b
// 2 1 0 1
// 3 1 1 0

// -------------------------

module f5a ( output s, input a, input b );

wire nand_a, nand_b, nand_ab1, nand_ab2;

nand NAND1(nand_a,a);
nand NAND2(nand_ab1, nand_a, b);

nand NAND3(nand_b,b);
nand NAND4(nand_ab2, nand_b, a);

nand NAND5(s, nand_ab1, nand_ab2);

endmodule // f5a

module f5b ( output s, input a, input b );

assign ab1 = ~(b&~(a&a));
assign ab2 = ~(a&~(b&b));

assign s = ~(ab1&ab2);

endmodule // f5b

module test_f5;
reg x;
reg y;
wire a, b;
f5a moduloA ( a, x, y );
f5b moduloB ( b, x, y );

initial
begin : main
$display("Exemplo_0507 - Thaís Ferreira da Silva - 741648");
$display("   x    y    a    b");

$monitor("%4b %4b %4b %4b", x, y, a, b);
x = 1'b0; y = 1'b0;
#1 x = 1'b0; y = 1'b1;
#1 x = 1'b1; y = 1'b0;
#1 x = 1'b1; y = 1'b1;
end
endmodule // test_f5