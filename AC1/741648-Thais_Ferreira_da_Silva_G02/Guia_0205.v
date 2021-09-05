/*
Guia_0205
Thaís Ferreira da Silva - 741648
*/
module Guia_0205;
// define data
reg [7:0] a = 8'b0101_0100 ; // binary
reg [7:0] b = 8'b0011_1110 ; // binary
reg [7:0] c;
// actions
initial
begin : main
$display ( "Guia_0205" );
c = a+b;
$display ( "a = a+b = %b.%b", c[7:4],c[3:0] );

a = 8'b1001_1010 ; // binary
b = 8'b0010_1100 ; // binary
c = a-b;
$display ( "b = a-b = %b.%b", c[7:4],c[3:0] );

a = 8'b0100_0010 ; // binary
b = 8'b0011_0100 ; // binary
c = a*b;
$display ( "c = a*b = %b.%b", c[7:4],c[3:0] );

a = 8'b0100_0010 ; // binary
b = 8'b0011_0100 ; // binary
c = a/b;
$display ( "d = a/b = %b.%b", c[7:4],c[3:0] );

a = 8'b01101101 ; // binary
b = 8'b00001001 ; // binary
c = a%b;
$display ( "e = a%%b = %b%b", c[7:4],c[3:0] );
end // main
endmodule // Guia_0205