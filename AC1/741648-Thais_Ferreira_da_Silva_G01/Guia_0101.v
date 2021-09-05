/*
Guia_0101.v
Thaís Ferreira da Silva - 741648
*/

module Guia_0101;
// define data
integer x1 = 29; // decimal
reg [11:0] b1 = 0; // binary

integer x2 = 57; // decimal
reg [11:0] b2 = 0; // binary

integer x3 = 723; // decimal
reg [11:0] b3 = 0; // binary

integer x4 = 321; // decimal
reg [11:0] b4 = 0; // binary

integer x5 = 265; // decimal
reg [11:0] b5 = 0; // binary


// actions
initial
begin : main
$display ( "Guia_0101 - Tests" );

$display ( "Letra a:" );
$display ( "x = %d" , x1 );
b1 = x1;
$display ( "b = %8b", b1 );

$display ( "Letra b:" );
$display ( "x = %d" , x2 );
b2 = x2;
$display ( "b = %8b", b2 );

$display ( "Letra c:" );
$display ( "x = %d" , x3 );
b3 = x3;
$display ( "b = %8b", b3 );

$display ( "Letra d:" );
$display ( "x = %d" , x4 );
b4 = x4;
$display ( "b = %8b", b4 );

$display ( "Letra e:" );
$display ( "x = %d" , x5 );
b5 = x5;
$display ( "b = %8b", b5 );

end // main
endmodule // Guia_0101
