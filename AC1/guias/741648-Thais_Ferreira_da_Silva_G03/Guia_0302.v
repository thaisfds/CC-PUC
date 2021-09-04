/*
Guia_0302
Thaís Ferreira da Silva - 741648
*/
module Guia_0302;
// define data
reg [7:0] a = 8'h5C ; // hexadecimal
reg [6:0] b = 8'o157 ; // octal
reg [5:0] c = 8'b101101; // 231 base 4
reg [7:0] d = 0; // binary
reg [6:0] e = 0; // binary
reg [5:0] f = 0; // binary
// actions
initial
begin : main
$display ( "Guia_0302 - Tests" );

f = ~c+1;
$display ( "a = %6b -> C1(a) = %6b", c, ~c );

d = ~a+1;
$display ( "b = %8b -> C1(b) = %8b", a, ~a);

c = 8'b110110; // 231 base 4
f = ~c+1;
$display ( "c = %6b -> C1(c) = %6b -> C2(c) = %6b", c, ~c, f );

e = ~b+1;
$display ( "d = %7b -> C1(d) = %7b -> C2(d) = %7b", b, ~b, e );

a = 8'hE3 ; // hexadecimal
d = ~a+1;
$display ( "e = %8b -> C1(e) = %8b -> C2(e) = %8b", a, ~a, d );

end // main
endmodule // Guia_0302