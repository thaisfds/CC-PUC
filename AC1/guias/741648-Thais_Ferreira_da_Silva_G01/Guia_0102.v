/*
Guia_0102.v
Thaís Ferreira da Silva - 741648
*/
module Guia_0102;
// define data
integer x1 = 0; // decimal
reg [7:0] b1 = 8'b0010111; // binary (bits)

integer x2 = 0; // decimal
reg [7:0] b2 = 8'b0011011; // binary (bits)

integer x3 = 0; // decimal
reg [7:0] b3 = 8'b0101101; // binary (bits)

integer x4 = 0; // decimal
reg [7:0] b4 = 8'b0101011; // binary (bits)

integer x5 = 0; // decimal
reg [7:0] b5 = 8'b0100111; // binary (bits)
// actions
initial
begin : main
$display ( "Guia_0102 - Tests" );

$display ( "Letra a:" );
$display ( "b1 = %8b", b1 );
x1 = b1;
$display ( "x1 = %d", x1 );

$display ( "Letra b:" );
$display ( "b2 = %8b", b2 );
x2 = b2;
$display ( "x2 = %d", x2 );

$display ( "Letra c:" );
$display ( "b3 = %8b", b3 );
x3 = b3;
$display ( "x3 = %d", x3 );

$display ( "Letra d:" );
$display ( "b4 = %8b", b4 );
x4 = b4;
$display ( "x4 = %d", x4 );

$display ( "Letra e:" );
$display ( "b5 = %8b", b5 );
x5 = b5;
$display ( "x5 = %d", x5 );

end // main
endmodule // Guia_0102
