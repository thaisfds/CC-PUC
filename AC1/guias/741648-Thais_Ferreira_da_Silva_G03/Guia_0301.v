/*
Guia_0301
Thaís Ferreira da Silva - 741648
*/
module Guia_0301;
// define data
reg [7:0] a = 8'b00001110 ; // binary
reg [6:0] b = 8'b0010101 ; // binary
reg [5:0] c = 8'b001001 ; // binary
reg [7:0] d = 0; // binary
reg [6:0] e = 0; // binary
reg [5:0] f = 0; // binary
// actions
initial
begin : main
$display ( "Guia_0301 - Tests" );

f = ~c+1;
$display ( "a = %6b -> C1(a) = %6b", c, ~c);

d = ~a+1;
$display ( "b = %8b -> C1(b) = %8b", a, ~a);

c = 8'b110111 ; // binary
f = ~c+1;
$display ( "c = %6b -> C1(c) = %6b -> C2(c) = %6b", c, ~c, f );

e = ~b+1;
$display ( "d = %7b -> C1(d) = %7b -> C2(d) = %7b", b, ~b, e );

a = 8'b00111101 ; // binary
d = ~a+1;
$display ( "e = %8b -> C1(e) = %8b -> C2(e) = %8b", a, ~a, d );

end // main
endmodule // Guia_0301