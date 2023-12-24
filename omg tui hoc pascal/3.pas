

const
  MAX_SIZE = 100;

var
  arr: array[1..MAX_SIZE] of Integer;
  n, i, ms, ns, tami: Integer;
  maxs, tam: Integer;

begin
  Write('Nhập số phần tử của mảng: ');
  ReadLn(n);

  WriteLn('Nhập các phần tử của mảng:');
  for i := 1 to n do
  begin
    Write('arr[', i, '] = ');
    ReadLn(arr[i]);
  end;

  // Kiểm tra mảng không rỗng
  if n < 1 then
  begin
    WriteLn('Mảng rỗng.');
    Halt;
  end;

  // Khởi tạo maxs, tam, ms và ns
  maxs := arr[1];
  tam := arr[1];
  ms := 1;
  ns := 1;
  tami := 1;

  // Tính tổng đoạn con lớn nhất và lưu vị trí bắt đầu và kết thúc
  for i := 2 to n do
  begin
    // Nếu tam trở nên âm, reset nó về 0 và bắt đầu tính từ phần tử mới
    if tam < 0 then
    begin
      tam := 0;
      tami := i;
    end;

    // Tính tổng đoạn con kết thúc tại vị trí hiện tại
    tam := tam + arr[i];

    // Nếu tam lớn hơn maxs, cập nhật maxs và vị trí bắt đầu và kết thúc
    if tam > maxs then
    begin
      maxs := tam;
      ms := tami;
      ns := i;
    end;
  end;

  WriteLn('Tổng của đoạn con lớn nhất là: ', maxs);
  WriteLn('Vị trí bắt đầu: ', ms);
  WriteLn('Vị trí kết thúc: ', ns);
end.
