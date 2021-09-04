/*
 Guia_0202
 Thaís Ferreira da Silva - 741648
*/
module Guia_0202;
// define data
 real x = 0.125; // decimal
 integer y = 7 ; // counter
 integer z = 0; // inteiro
 reg [7:0] a = 0 ; // binary
 reg [7:0] b = 0 ; // binary

// actions
 initial
 begin : main
 $display ( "Guia_0202 - Tests" );

 //------------------------------------------------
 while ( x > 0 && y >= 0 )
 begin
 if ( x*2 >= 1 )
 begin
 a[y] = 1;
 x = x*2.0 - 1.0;
 end
 else
 begin
 a[y] = 0;
 x = x*2.0;
 end // end if
 y=y-1;
 end // end while
 $display ( "a = 0.%8b", a );

  //------------------------------------------------
  x = 0.03125; // decimal
  y = 7 ; // counter
  z = 1; // inteiro
  a = 0 ; // binary

 while ( x > 0 && y >= 0 )
 begin
 if ( x*2 >= 1 )
 begin
 a[y] = 1;
 x = x*2.0 - 1.0;
 end
 else
 begin
 a[y] = 0;
 x = x*2.0;
 end // end if
 y=y-1;
 end // end while

 b = z;
 $display ( "b = %8b,%8b", b, a );

 //------------------------------------------------
  x = 0.06250; // decimal
  y = 7 ; // counter
  z = 1; // inteiro
  a = 0 ; // binary

 while ( x > 0 && y >= 0 )
 begin
 if ( x*2 >= 1 )
 begin
 a[y] = 1;
 x = x*2.0 - 1.0;
 end
 else
 begin
 a[y] = 0;
 x = x*2.0;
 end // end if
 y=y-1;
 end // end while

 b = z;
 $display ( "c = %8b,%8b", b, a );

 //------------------------------------------------
  x = 0.75; // decimal
  y = 7 ; // counter
  z = 3; // inteiro
  a = 0 ; // binary

 while ( x > 0 && y >= 0 )
 begin
 if ( x*2 >= 1 )
 begin
 a[y] = 1;
 x = x*2.0 - 1.0;
 end
 else
 begin
 a[y] = 0;
 x = x*2.0;
 end // end if
 y=y-1;
 end // end while

 b = z;
 $display ( "d = %8b,%8b", b, a );

 //------------------------------------------------
  x = 0.81250; // decimal
  y = 7 ; // counter
  z = 11; // inteiro
  a = 0 ; // binary

 while ( x > 0 && y >= 0 )
 begin
 if ( x*2 >= 1 )
 begin
 a[y] = 1;
 x = x*2.0 - 1.0;
 end
 else
 begin
 a[y] = 0;
 x = x*2.0;
 end // end if
 y=y-1;
 end // end while

 b = z;
 $display ( "e = %8b,%8b", b, a );




 
 end // main
endmodule // Guia_0202