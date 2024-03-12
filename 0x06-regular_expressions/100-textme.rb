#!/usr/bin/env ruby

a = ARGV[0].scan(/\[from:(\S+)\]/)
b = ARGV[0].scan(/\[to:(\S+)\]/)
c = ARGV[0].scan(/\[flags:(\S+)\]/)

puts [a, b, c].join(',')
