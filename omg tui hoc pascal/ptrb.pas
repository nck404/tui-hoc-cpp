
const
  MAX_SIZE = 100000000;

var
  arr: array[1..MAX_SIZE] of Integer;
  n, i, j, count: Integer;

begin
  write('Nhap so phan tu cua mang: ');
  readln(n);
  writeln('Nhap cac phan tu cua mang:');
  for i := 1 to n do
    read(arr[i]);
  count := 0;
  for i := 1 to n do
  begin
    j := 1;
    while (j < i) and (arr[j] <> arr[i]) do
      Inc(j);
    if j = i then
      Inc(count);
  end;
  writeln('So phan tu rieng biet: ', count);

  readln;
end.
