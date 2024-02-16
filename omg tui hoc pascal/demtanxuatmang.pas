uses
  crt;
var
  arr: array[1..1000] of Integer;
  f: array[1..1000]  of Integer;
  i, n: Integer;

begin
  Readln(n);
  for i := 1 to n  do
    Readln(arr[i]);
  for i := 1 to n do
    f[i] := 0;
  for i := 1 to n do
    inc(f[arr[i]]);
  for i := 1 to n do
    if f[i] > 0 then
      Writeln('pt ', i, ': ', f[i]);
  Readln;
end.
