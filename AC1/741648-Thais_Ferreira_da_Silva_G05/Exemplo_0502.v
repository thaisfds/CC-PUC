// -------------------------
// Exemplo_0502 - NOR (~a & b)
// Nome: Thaís Ferreira da Silva
// Matricula: 741648

// f5_gate
// m a b s
// 0 0 0 0
// 1 0 1 1 <- a'.b
// 2 1 0 0
// 3 1 1 0

// -------------------------

module f5a ( output s, input a, input b );

wire nor_a,nor_b, nor_aa;

nor NOR1(nor_a,a);
nor NOR2(nor_aa,nor_a);
nor NOR3(nor_b,b);
nor NOR4(s, nor_aa,nor_b);

endmodule // f5a

module f5b ( output s, input a, input b );

assign s = ~(~(~(a|a)|~(a|a))|~(b|b));

endmodule // f5b

module test_f5;
reg x;
reg y;
wire a, b;
f5a moduloA ( a, x, y );
f5b moduloB ( b, x, y );

initial
begin : main
$display("Exemplo_0502 - Thaís Ferreira da Silva - 741648");
$display("   x    y    a    b");

$monitor("%4b %4b %4b %4b", x, y, a, b);
x = 1'b0; y = 1'b0;
#1 x = 1'b0; y = 1'b1;
#1 x = 1'b1; y = 1'b0;
#1 x = 1'b1; y = 1'b1;
end
endmodule // test_f5