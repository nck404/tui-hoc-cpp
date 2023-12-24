program CharacterFrequency;
var
  s: string;
  charFrequency: array['A'..'z'] of Integer;
  charOrder: array of Char;
  c: Char;
begin
  readln(s);

  // Khởi tạo bảng tần suất xuất hiện
  for c := 'A' to 'z' do
    charFrequency[c] := 0;
  SetLength(charOrder, 0);
  for c in s do
  begin
    if (c >= 'A') and (c <= 'z') then
    begin
      Inc(charFrequency[c]);
      if (Length(charOrder) = 0) or (charOrder[High(charOrder)] <> c) then
        charOrder := charOrder + c;
    end;
  end;

  // In ra các ký tự và tần suất xuất hiện theo thứ tự từ điển tăng dần
  for c := 'A' to 'z' do
  begin
    if charFrequency[c] > 0 then
      writeln(c, ' ', charFrequency[c]);
  end;

  writeln;

  // In ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu (mỗi ký tự chỉ in 1 lần)
  for c in charOrder do
    write(charFrequency[c], ' ');
end.
