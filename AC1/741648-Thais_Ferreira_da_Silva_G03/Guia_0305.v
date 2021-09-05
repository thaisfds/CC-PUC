/*
Guia_0305
Thaís Ferreira da Silva - 741648
*/
module Guia_0305;
// define data
reg [7:0] a = 8'b00101110 ; // binary (a)
reg [7:0] b = 8'b00001101 ; // binary (a)
reg [8:0] c = 9'hAC ; // hexadecimal (d)
reg [8:0] d = 9'b01001011 ; // binary (d)

reg [7:0] e = 0 ; // binary
reg [8:0] f = 0 ; // binary
// actions
initial
begin : main
$display ( "Guia_0305 - Tests" );

e = a-b;
$display("a = %8b-%8b = %8b (2)", a, b, e );

a = 8'b0101_1110 ; // binary (b)
b = 8'b0010_0110 ; // binary (b)
e = a-b;
$display("b = %8b-%8b = %8b (2) = %o,%o (8)", a, b, e , e[6:4], e[3:1]);

a = 8'b00100111 ; // binary (c)
b = 8'hF ; // hexadecimal(c)
e = a-b;
$display("c = %8b-%8b = %d%d%d (4) = %h (16)", a, b, e[5:4], e[3:2], e[1:0], e);

f = c-d;
$display("d = %9b-%9b = %9b (2) = %h (16)", c, d, f, f);

a = 8'd34 ; // deciamal(e)
b = 8'h2B ; // hexadecimal(e)
e = ~(a-b)+1;
$display("e = %8b-%8b = %d (10) = %h (16)", a, b, e, e);

end // main
endmodule // Guia_0305