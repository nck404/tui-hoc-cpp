uses crt;
  var a  ,p  : string  ;
     i , k  : byte ;
   begin
    clrscr ;
    write( ' nhap xau :');
    readln(a);
    p := '' ;
    for i := length(a) downto  1  do  p := p + a[i] ;
    if a = p then
         write(' day la xau doi xung ')
     else write(' khong phai xau doi xung ');

      readln
      end.