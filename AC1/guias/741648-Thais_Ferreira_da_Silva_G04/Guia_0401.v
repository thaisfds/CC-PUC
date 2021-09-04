/*
Guia_0401
Thaís Ferreira da Silva - 741648
*/

module fxyzEX (output s, input x, y, z);
    assign s = ~x | (~y & ~z);
endmodule //exemplo

module fxyzA (output s, input x, y, z);
    assign s = x & ~(y | ~z);
endmodule // letra a

module fxyzB (output s, input x, y, z);
    assign s = ~(x | ~y) & ~z;
endmodule // letra b

module fxyzC (output s, input x, y, z);
    assign s = ~(x & ~y) & z;
endmodule // letra c

module fxyzD (output s, input x, y, z);
    assign s = ~(x & y) & z;
endmodule // letra d

module fxyzE (output s, input x, y, z);
    assign s = (~x | y) & ( y | z);
endmodule // letra e

module Guia_0401;
reg x, y, z;
wire ex, a, b, c, d, e;

// instancias
fxyzEX FXY1 (ex, x, y, z);
fxyzA FXY2 (a, x, y, z);
fxyzB FXY3 (b, x, y, z);
fxyzC FXY4 (c, x, y, z);
fxyzD FXY5 (d, x, y, z);
fxyzE FXY6 (e, x, y, z);

// valores iniciais
initial begin: start
x=1'bx; y=1'bx; z=1'bx;// indefinidos
end

// parte principal
initial begin: main

// identificacao
$display("Guia_0401- Thaís Ferreira da Silva - 741648");
$display("\nExemplo: x'+(y'.z')");
$display("\na: x.(y+z')'");
$display("\nb: (x+y')'.z'");
$display("\nc: (x.y')'.z");
$display("\nd: (x.y)'.z");
$display("\ne: (x'+y).(y+z)");


// monitoramento
$display(" x  y  z =  ex a  b  c  d  e");
$display(" ");
$monitor("%2b %2b %2b = %2b %2b %2b %2b %2b %2b", x, y, z, ex, a, b, c, d, e);

// sinalizacao
#1 x=0; y=0; z=0;
#1 x=0; y=0; z=1;
#1 x=0; y=1; z=0;
#1 x=0; y=1; z=1;
#1 x=1; y=0; z=0;
#1 x=1; y=0; z=1;
#1 x=1; y=1; z=0;
#1 x=1; y=1; z=1;
end
endmodule // Guia_0401
