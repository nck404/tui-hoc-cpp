program CommonCharacters;
var
  S1, S2, commonChars, uniqueChars: string;
  i: Integer;
  
begin
  commonChars := '';
  uniqueChars := '';

  // Đọc xâu S1 và S2
  Write('Nhập xâu S1: ');
  Readln(S1);
  Write('Nhập xâu S2: ');
  Readln(S2);

  // Tìm và in ra các kí tự xuất hiện ở cả hai xâu theo thứ tự từ điển
  for i := 1 to Length(S1) do
  begin
    if (Pos(S1[i], S2) > 0) and (Pos(S1[i], commonChars) = 0) then
      commonChars := commonChars + S1[i];
    if (Pos(S1[i], uniqueChars) = 0) then
      uniqueChars := uniqueChars + S1[i];
  end;

  for i := 1 to Length(S2) do
  begin
    if (Pos(S2[i], S1) > 0) and (Pos(S2[i], commonChars) = 0) then
      commonChars := commonChars + S2[i];
    if (Pos(S2[i], uniqueChars) = 0) then
      uniqueChars := uniqueChars + S2[i];
  end;

  // Sắp xếp các kí tự theo thứ tự từ điển
  commonChars := SortString(commonChars);
  uniqueChars := SortString(uniqueChars);

  // In ra các kí tự xuất hiện ở cả hai xâu theo thứ tự từ điển
  Writeln(commonChars);

  // In ra các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển
  Writeln(uniqueChars);
end.


