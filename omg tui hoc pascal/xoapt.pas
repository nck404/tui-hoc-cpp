
var
   a:array[1..100000] of integer;
   i,j,k,n:integer;
begin
   readln(n);
   for i:=1 to n do
      begin
         readln(a[i]);
      end;
   i:=2;
   while i <= n do
      begin
         j:=1;
         while a[j] <> a[i] do
            j:=j+1;
         if j < i then
            begin
               for k:=i to n-1 do
                  a[k]:= a[k+1];
               n:=n-1;
            end
         else
            i:=i+1;
      end;
   writeln;
   write(': ');
   for i:=1 to n do
      write(a[i]:5);
   readln
end. 