/*
Guia_0103.v
Thaís Ferreira da Silva - 741648
*/
module Guia_0103;
// define data
integer x1 = 71; // decimal
reg [11:0] b1 = 0; // binary

integer x2 = 49; // decimal
reg [11:0] b2 = 0; // binary

integer x3 = 66; // decimal
reg [11:0] b3 = 0; // binary

integer x4 = 175; // decimal
reg [11:0] b4 = 0; // binary

integer x5 = 731; // decimal
reg [11:0] b5 = 0; // binary

// actions
initial
begin : main
$display ( "Guia_0103 - Tests" );

$display ( "Letra a:" );
$display ( "x1 = %d" , x1 );
b1 = x1;
$display ( "b1 = [%2b] [%2b] [%2b] [%2b] = %x %x %x %x (4)", b1[7:6], b1[5:4],b1[3:2], b1[1:0], b1[7:6], b1[5:4],b1[3:2], b1[1:0]);

$display ( "Letra b:" );
$display ( "x2 = %d" , x2 );
b2 = x2;
$display ( "b2 = %o (8)", b2);

$display ( "Letra c:" );
$display ( "x3 = %d" , x3 );
b3 = x3;
$display ( "b3 = %x (16)", b3);

$display ( "Letra d:" );
$display ( "x4 = %d" , x4 );
b4 = x4;
$display ( "b4 = %x (16)", b4 );

$display ( "Letra e:" );
$display ( "x5 = %d" , x5 );
b5 = x5;
$display ( "b5 = %x (16)", b5 );

end // main
endmodule // Guia_0103
