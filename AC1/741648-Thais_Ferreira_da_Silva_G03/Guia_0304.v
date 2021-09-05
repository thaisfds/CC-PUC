/*
Guia_0304
Thaís Ferreira da Silva - 741648
*/
module Guia_0304;
// define data
reg signed [12:0] a1 = 13'h9C3; // binary 13 bits (e)
reg signed [12:0] a2 = 13'hA1B; // binary 13 bits
reg signed [8:0] b1 = 9'o321; // binary 9 bits (d)
reg signed [8:0] b2 = 9'o123; // binary 9 bits
reg signed [7:0] c1 = 8'b101_1001; // binary 8 bits (b)
reg signed [7:0] c2 = 8'b010_1100; // binary 8 bits
reg signed [5:0] d1 = 6'b011110; // binary 6 bits (a)
reg signed [5:0] d2 = 6'b001101; // binary 6 bits
reg signed [6:0] i1 = 7'b0101101; // binary 7 bits (c)
reg signed [6:0] i2 = 7'b0011011; // binary 7 bits

reg signed [12:0] e = 0; // binary
reg signed [8:0] f = 0; // binary
reg signed [7:0] g = 0; // binary
reg signed [5:0] h = 0; // binary
reg signed [6:0] j = 0; // binary
// actions
initial
begin : main
$display ( "Guia_0304 - Tests" );

h = d1-d2;
$display ( "a = %6b-%6b = %6b", d1, d2, h );

g = c1-c2;
$display ( "b = %8b-%8b = %8b", c1, c2, g );

j = i1-i2;
$display ( "c = %7b-%7b = %7b = %d%d%d", i1, i2, j, j[5:4], j[3:2], j[1:0] );

f = b1-b2;
$display ( "d = %9b-%9b = %9b = %d%d%d", b1, b2, f, f[8:6], f[5:3] , f[2:0]);

e = a1-a2;
$display ( "e = %13b-%13b = %13b = %h", a1, a2, e, e );
end // main
endmodule // Guia_0304