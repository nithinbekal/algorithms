

def longest_common_subsequence(s1, s2)
  return '' if s1 == '' or s2 == ''
  
  if s1[0] == s2[0]
    s1[0] + longest_common_subsequence(s1[1..-1], s2[1..-1])
  else
    [longest_common_subsequence(s1, s2[1..-1]), 
      longest_common_subsequence(s1[1..-1], s2)].max_by { |s| s.length }
  end
end
