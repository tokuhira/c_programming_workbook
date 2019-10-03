#!/usr/bin/perl
use strict;
use warnings;
use File::Basename 'fileparse';

# Sub routine
sub my_cmp {
    my ($a, $b) = @_;
    return 0 if $a eq $b;
    return $a cmp $b if $a xor $b;
    my ($a1, $a2, $a3) = ($a =~ /^(\d*)(\D*)(.*)/);
    my ($b1, $b2, $b3) = ($b =~ /^(\d*)(\D*)(.*)/);
    return $a1 <=> $b1 if ($a1 or $b1) and $a1 != $b1;
    return $a2 cmp $b2 if ($a2 or $b2) and $b2 ne $b2;
    return my_cmp($a3, $b3);
}
sub naturally { return my_cmp($a, $b) };

# Header
print <<__EOT__;
cmake_minimum_required(VERSION 2.8)
project( shakyo )
__EOT__

# Body
my $regex_suffix = qr/\.c$/;
foreach (sort naturally <"*.c">) {
	my ($base, $dir, $ext) = fileparse($_, $regex_suffix);
	print "add_executable( $base $_ )\n";
}
