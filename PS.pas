uses crt;

var
  st, a: string;
  i, j, dem: integer;
  ktra: boolean;
function dems(s: string; c: char): integer;
var
  i, count: integer;
begin
  count := 0;
  for i := 1 to length(s) do
    if s[i] = c then
      count := count + 1;
  dems := count;
end;




begin
  clrscr;
  write('Nhap xau: ');
  readln(st);
  a := '';

  for i := 1 to length(st) do
  begin
    ktra := true;

    for j := 1 to i - 1 do
      if st[i] = st[j] then
        ktra := false;

    if ktra then
    begin
      dem := dems(st, st[i]);

      while dem > 1 do
        dem := dem - 1;

      a := a + st[i];
    end;
  end;

  writeln('> : ', a);
  readln;
end.
