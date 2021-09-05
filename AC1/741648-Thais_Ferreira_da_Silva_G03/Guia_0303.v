/*
Guia_0303
Thaís Ferreira da Silva - 741648
*/
module Guia_0303;
// define data
reg signed [7:0] a = 8'b10100101; // binary 8 bits
reg signed [6:0] b = 8'b1011001; // binary 7 bits
reg signed [5:0] c = 8'b110101; // binary 6 bits
reg signed [4:0] d = 8'b10111; // binary 5 bits
reg signed [7:0] e = 0; // binary
reg signed [6:0] f = 0; // binary
// actions
initial
begin : main
$display ( "Guia_0303 - Tests" );

e = ~d+1;
f = ~(d-1);
$display ( "a = %5b -> C1(a) = %5b -> C2(a) = %5b = %d = %d", d, ~d, e, e, f );

e = ~c+1;
f = ~(c-1);
$display ( "b = %6b -> C1(b) = %6b -> C2(b) = %6b = %d = %d", c, ~c, e, e, f );

c = 8'b110110; // binary 6 bits
e = ~c+1;
f = ~(c-1);
$display ( "c = %6b -> C1(c) = %6b -> C2(c) = %6b = %6b = %6b", c, ~c, e, e, f );

e = ~b+1;
f = ~(b-1);
$display ( "d = %7b -> C1(d) = %7b -> C2(d) = %7b = %7b = %7b", b, ~b, e, e, f );

e = ~a+1;
f = ~(a-1);
$display ( "e = %8b -> C1(e) = %8b -> C2(e) = %8b = %h = %h", a, ~a, e, e, f );
end // main end // main
endmodule // Guia_0303