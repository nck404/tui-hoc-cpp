uses crt ;
type arrint = array[1..100] of integer ;
   bool = array[1..100] of   boolean ;
var i , n  , map , d, j: integer;
    a , m : arrint ;
   { m : bool ;}
 begin
 clrscr ;
 readln(n);
 for i := 1 to n do
              begin
               write('a[',i,' ] = ');
               readln(a[i]);
              end;

     fillchar(m , n , 0 );
     for i := 1 to n do
     begin
      if  m[a[i]]  = 0 then
       begin
         m[a[i]] := 1 ;
         write(a[i]:4);
         for j := 1 to i do
         if (m[a[i]] mod i = 0)  then inc(d);
         write(d);
        { if m[a[i]] = true then
          if m[a[i]]  a[i] = 0 then inc(d);}
       end;
       end;

    readln
    end.