#!/usr/bin/perl
use strict;
use warnings;
use File::Basename 'fileparse';

# Header
print <<__EOT__;
cmake_minimum_required(VERSION 2.8)
project( shakyo )
__EOT__

# Body
my $regex_suffix = qr/\.[^\.]+$/;
while (<DATA>) {
	chomp;
	my ($base, $dir, $ext) = fileparse($_, $regex_suffix);
	$base eq "" and die "$_: base name is empty";
	$dir ne "" or die "$_: directry not supported";
	$ext eq ".c" or die "$_: suffix must be '.c'";
	print "add_executable( $base $_ )\n";
}

__DATA__
sample1-1.c
sample1-2-2.c
sample1-2.c
sample1-3.c
sample4-1.c
sample4-2.c
sample4-3.c
sample4-4.c
sample4-5.c
sample5-1.c
sample5-2.c
sample5-3.c
sample6-1.c
sample6-2.c
sample6-3.c
sample6-4.c
sample6-5.c
sample6-6.c
sample6-7.c
sample6-8.c
sample8-1.c
sample8-2.c
sample8-3.c
sample8-4.c
sample9-1.c
sample9-2.c
sample9-3.c
sample9-4.c
sample9-5.c
sample9-6.c
sample9-7.c
sample9-8.c
sample9-9.c
sample9-10.c
sample9-11.c
sample9-12.c
sample9-13.c
sample9-14.c
sample9-15-max.c
sample9-15-smallest.c
sample9-16.c
sample9-17.c
sample9-18.c
sample9-19.c
sample9-20.c
sample10-1.c
sample10-2.c
sample11-1.c
sample11-2.c
sample11-3.c
sample11-4.c
sample11-5.c
sample11-6.c
sample11-7.c
sample11-8.c
sample11-9.c
sample11-9_Experiment.c
sample11-10.c
sample11-11.c
sample11-12.c
sample11-13.c
sample11-14.c
sample11-15.c
sample11-16.c
sample11-17.c
sample11-18.c
sample11-19.c
sample11-20.c
