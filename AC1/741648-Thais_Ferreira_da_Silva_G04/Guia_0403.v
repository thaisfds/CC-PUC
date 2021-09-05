/*
Guia_0403
Thaís Ferreira da Silva - 741648
*/

module SoP (output s, input x, y, z);// mintermos
            //m     0           1           2           3           4 
    assign s = (~x&~y&~z) | (~x&~y&z) | (~x&y&~z) | (~x&y&z) | (x&~y&~z);
endmodule // SoP Exemplo

module SoPA (output s, input x, y, z);
    assign s = (~x&y&~z) | (~x&y&z) | (x&y&~z) | (x&y&z);
endmodule // SoP Letra A

module SoPB (output s, input x, y, z);
    assign s = (~x&~y&z) | (~x&y&z) | (x&~y&~z) | (x&~y&z);
endmodule // SoP Letra B

module SoPC (output s, input x, y, w, z);
    assign s = (~x&~y&~w&z) | (~x&~y&w&~z) | (~x&y&~w&z) | (~x&y&w&z) | (x&~y&~w&z) | (x&y&~w&~z) | (x&y&~w&z);
endmodule // SoP Letra C

module SoPD (output s, input x, y, w, z);
    assign s = (~x&~y&~w&~z) | (~x&~y&w&~z) | (~x&y&~w&z) | (~x&y&w&z) | (x&~y&~w&z) | (x&~y&w&~z) | (x&y&~w&~z);
endmodule // SoP Letra D

module SoPE (output s, input x, y, w, z);
    assign s = (~x&~y&~w&z) | (~x&~y&w&~z) | (~x&~y&w&z) | (~x&y&~w&z) | (~x&y&w&z) | (x&~y&w&z);
endmodule // SoP Letra E

module Guia_0403;
reg x, y, w, z;
wire ex, a, b, c, d, e;

// instancias
SoP FXYZ1 (ex, y, w, z);
SoPA FXYZ2 (a, y, w, z);
SoPB FXYZ3 (b, y, w, z);
SoPC FXYWZ4 (c, x, y, w, z);
SoPD FXYWZ5 (d, x, y, w, z);
SoPE FXYWZ6 (e, x, y, w, z);

// valores iniciais
initial begin: start
x=1'bx; y=1'bx; w=1'bx; z=1'bx;// indefinidos
end

// parte principal
initial begin: main

// identificacao
$display("\nGuia_0403- Thaís Ferreira da Silva - 741648");


// monitoramento
$display(" x  y  w  z =  ex a  b  c  d  e\n");
$monitor("%2b %2b %2b %2b = %2b %2b %2b %2b %2b %2b", x, y, w, z, ex, a, b, c, d, e);

// sinalizacao
#1 x=0; y=0; w=0; z=0;
#1 x=0; y=0; w=0; z=1;
#1 x=0; y=0; w=1; z=0;
#1 x=0; y=0; w=1; z=1;
#1 x=0; y=1; w=0; z=0;
#1 x=0; y=1; w=0; z=1;
#1 x=0; y=1; w=1; z=0;
#1 x=0; y=1; w=1; z=1;
#1 x=1; y=0; w=0; z=0;
#1 x=1; y=0; w=0; z=1;
#1 x=1; y=0; w=1; z=0;
#1 x=1; y=0; w=1; z=1;
#1 x=1; y=1; w=0; z=0;
#1 x=1; y=1; w=0; z=1;
#1 x=1; y=1; w=1; z=0;
#1 x=1; y=1; w=1; z=1;
end
endmodule // Guia_0403