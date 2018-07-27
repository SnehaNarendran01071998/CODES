 // Capt ion : Hamming Encoding
 //H( 7 , 4 )
 //Code Word Length = 7 , Mes sage Word l e n g t h = 4 ,
//Pa r i t y b i t s =3
 // c l e a r ;
 close ;
clc ;
// Ge t t ing Mes sage Word
m3 = input ( ' Ent e r the 1 b i t (MSb) o f me s sage word ' );
m2 = input ( ' Ent e r the 2 b i t o f me s sage word ' );
m1 = input ( ' Ent e r the 3 b i t o f me s sage word ' );
m0 = input ( ' Ent e r the 4 b i t ( LSb ) o f me s sage word ' );
// Gene r a t ing Pa r i t y b i t s
for i = 1:(2^4)
b2(i) = bitxor (m0(i),bitxor (m3(i),m1(i)));
b1(i) = bitxor (m1(i),bitxor (m2(i),m3(i)));
b0(i) = bitxor (m0(i),bitxor (m1(i),m2(i)));
m(i ,:) = [m3(i) m2(i) m1(i) m0(i)];
b(i ,:) = [b2(i) b1(i) b0(i)];
end
C = [b m];
disp ( ' ' )
for i = 1:2^4
disp (i)
disp (m(i ,:) , 'Mes sage Word ' )
disp (b(i ,:) , ' Pa r i t y Bi t s ' )
disp (C(i ,:) , 'CodeWord ' )
disp (" ");
disp (" ");
end
disp ( ' ' )

