# Sieve of Eratosthenes

## Description

The Sieve of Eratosthenes is an algorithm for finding all prime numbers in the range `[1, n]` in ` O(n \log \log n)` operations.

The idea is simple: we write down the sequence of numbers from 1 to n and then systematically eliminate multiples of each prime number starting from 2, 3, 5, 7, 11, and so on, up to the square root of n.

## Algorithm

1. Create a list of consecutive integers from 2 to `n`: `( 2, 3, 4, ..., n )`.
2. Starting from the first prime number ` p = 2`, mark the multiples of ` p ` as composite numbers. These are the numbers `2p, 3p, 4p, ... `, up to ` n `. Note that we only need to consider multiples of ` p ` starting from ` p^2 ` because any smaller multiple of ` p ` has already been marked as composite by a smaller prime factor.
3. Find the smallest remaining number greater than `p` in the list. This number is the next prime ` p `.
4. Repeat steps 2 and 3 until ` p^2 > n `.
5. All remaining unmarked numbers in the list are prime.
