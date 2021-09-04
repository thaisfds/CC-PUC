/*
Guia_0105.v
Thaís Ferreira da Silva - 741648
*/
module Guia_0105;
// define data
integer x = 13; // decimal
reg [7:0] b; // binary
reg [0:2][7:0] s = "PUC"; // 3 characters (8 bits)

reg [0:8][7:0] s1 = "PUC-Minas"; // 9 characters (8 bits)
reg [0:5][7:0] s2 = "2021-2"; // 6 characters (8 bits)
reg [0:13][7:0] s3 = "Belo Horizonte"; // 14 characters (8 bits)

reg [7:0] o1 = 8'o124;
reg [7:0] o2 = 8'o141;
reg [7:0] o3 = 8'o162;
reg [7:0] o4 = 8'o144;
reg [7:0] o5 = 8'o45;

reg [7:0] h1 = 8'h42;
reg [7:0] h2 = 8'h2e;
reg [7:0] h3 = 8'h48;
reg [7:0] h4 = 8'h74;
reg [7:0] h5 = 8'h65;
reg [7:0] h6 = 8'h2e;

// actions
initial
begin : main
$display ( "Guia_0105 - Tests" );

$display ( "Letra a:" );
$display ( "%s = %h %h %h %h %h %h %h %h %h" , s1, s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8] );

$display ( "Letra b:" );
$display ( "%s = %h %h %h %h %h %h" , s2, s2[0], s2[1], s2[2], s2[3], s2[4], s2[5]);

$display ( "Letra c:" );
$display ( "%s = %8b %8b %8b %8b %8b %8b %8b %8b %8b %8b %8b %8b %8b %8b" , s3, s3[0], s3[1], s3[2], s3[3], s3[4], s3[5], s3[6], s3[7], s3[8], s3[9], s3[10], s3[11], s3[12], s3[13] );

$display ( "Letra d:" );
$display ( "%o %o %o %o %o = %s %s %s %s %s" , o1, o2, o3, o4, o5, o1, o2, o3, o4, o5);

$display ( "Letra e:" );
$display ( "%h %h %h %h %h %h = %s %s %s %s %s %s" , h1, h2, h3, h4, h5, h6, h1, h2, h3, h4, h5, h6);

end // main
endmodule // Guia_0105
