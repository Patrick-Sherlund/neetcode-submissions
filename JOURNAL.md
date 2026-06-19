# Interview Prep Journal

A daily journal for DSA, NeetCode, C++, system design, book notes, mistakes, patterns, and interview communication practice.

---

## 📌 Current Focus

**Main goal this week:**

* Build strong momentum through NeetCode's Arrays & Hashing section while learning the underlying DSA patterns instead of only memorizing solutions.

**Current DSA topic:**

* Arrays & Hashing
* Hash sets, hash maps, frequency counting, grouping, and basic array manipulation
* Sorting algorithms as the next blocker before continuing with `Sort an Array`

**Current C++ topic:**

* Implementing DSA problems in C++ first
* STL containers for interview problems: `vector`, `unordered_set`, `unordered_map`, strings, and arrays
* Translating C++ solutions into Python, Java, and TypeScript after understanding the core idea

**Current system design topic:**

* Foundational system design reading from *System Design Interview, an Insider's Guide - Volume 1*

**Books currently reading:**

* *A Tour of C++, 3rd Edition*
* *System Design Interview, an Insider's Guide - Volume 1*

---

## 🔁 Active Review Queue

| Item                         | Type    | Why I need to review it                                                                                                                           | Review Date | Status      |
| ---------------------------- | ------- | ------------------------------------------------------------------------------------------------------------------------------------------------- | ----------- | ----------- |
| Sort an Array                | Problem | This problem introduced sorting algorithms and became the first real blocker after the Arrays & Hashing momentum.                                 | 2026-06-19  | Not Started |
| Sorting Algorithms           | Concept | Need to understand the core sorting approaches before attempting `Sort an Array` confidently.                                                     | 2026-06-19  | Not Started |
| Hash Map / Hash Set Patterns | Concept | These show up repeatedly across Arrays & Hashing problems and are becoming a core interview pattern.                                              | 2026-06-21  | In Progress |
| Multi-language Translation   | Concept | Currently solving in C++ first, then translating to Python, Java, and TypeScript; need to keep syntax differences from hiding the main algorithm. | 2026-06-22  | In Progress |

---

# Daily Entries

---

<details>
<summary><strong>📅 2026-06-18 — Day #1 — Main Focus: Arrays & Hashing Momentum</strong></summary>

<br>

## 🎯 Today’s Main Goal

> Build momentum through NeetCode's beginner DSA course by completing the early Arrays & Hashing problems and making sure I understand the patterns well enough to implement them in C++ first, then translate them into Python, Java, and TypeScript.

---

## ⏱️ Prep Session Summary

**Total study time:**
**Energy level:** High
**Focus quality:** Locked In
**Main category:** Mixed — DSA / NeetCode / C++

**What I worked on today:**

* Studied the **Algorithms and Data Structures for Beginners** course on NeetCode.io.
* Completed the first batch of NeetCode 250 problems shown under the Arrays & Hashing area.
* Practiced solving problems in **C++ first**, then translating the same ideas into **Python, Java, and TypeScript**.
* Built confidence with arrays, hash sets, hash maps, frequency counting, and grouping patterns.
* Hit a real difficulty spike at **Sort an Array**, which forced me to pause and go learn sorting algorithms before attempting the problem seriously.

---

# 🧠 DSA Notes

## Topic Studied

**Topic:**
Arrays & Hashing

**What I learned:**

* Arrays are useful when the problem is mostly about direct indexing, scanning, building a result, or preserving order.
* Hash sets are useful when I only care whether something has been seen before.
* Hash maps are useful when I need to map one thing to another, usually a value to an index, a character to a count, or a normalized key to a group.
* Many "easy" problems are not about complicated algorithms; they are about recognizing the correct container quickly.
* Translating a solution across languages is easier when the underlying pattern is clear.

**Important pattern or idea:**

* If the problem asks whether something exists, think **hash set**.
* If the problem asks how many times something appears, think **frequency map**.
* If the problem asks to group similar items, think **normalized key → list of items**.
* If the problem asks for a pair that adds to a target, think **complement lookup** with a hash map.
* If the problem depends on order and repeated scanning, check whether a direct array pass is enough before reaching for something heavier.

**Where I got confused:**

* The first major slowdown happened at **Sort an Array** because sorting requires understanding algorithms like merge sort, quicksort, heap sort, and their tradeoffs.
* This made it clear that I should pause and learn the sorting lessons before forcing a solution.

**Simple explanation in my own words:**

> Arrays & Hashing problems are mostly about choosing the right way to remember information while scanning. If I only need to know whether I have seen something, I use a set. If I need to remember a value tied to another value, I use a map. If I need counts, I use a frequency map or fixed-size array when the character range is known.

---

# 🧩 NeetCode / LeetCode Problems

## Completed Problem Batch

| #  | Problem                | Link                                                                          | Category         | Difficulty | Status | Main Pattern                  |
| -- | ---------------------- | ----------------------------------------------------------------------------- | ---------------- | ---------- | ------ | ----------------------------- |
| 1  | Concatenation of Array | https://neetcode.io/problems/concatenation-of-array/question?list=neetcode250 | Arrays & Hashing | Easy       | Solved | Array construction            |
| 2  | Contains Duplicate     | https://neetcode.io/problems/duplicate-integer/question?list=neetcode250      | Arrays & Hashing | Easy       | Solved | Hash set / seen values        |
| 3  | Valid Anagram          | https://neetcode.io/problems/is-anagram/question?list=neetcode250             | Arrays & Hashing | Easy       | Solved | Frequency counting            |
| 4  | Two Sum                | https://neetcode.io/problems/two-integer-sum/question?list=neetcode250        | Arrays & Hashing | Easy       | Solved | Hash map / complement lookup  |
| 5  | Longest Common Prefix  | https://neetcode.io/problems/longest-common-prefix/question?list=neetcode250  | Arrays & Hashing | Easy       | Solved | String scanning               |
| 6  | Group Anagrams         | https://neetcode.io/problems/anagram-groups/question?list=neetcode250         | Arrays & Hashing | Medium     | Solved | Normalized key / grouping     |
| 7  | Remove Element         | https://neetcode.io/problems/remove-element/question?list=neetcode250         | Arrays & Hashing | Easy       | Solved | In-place write pointer        |
| 8  | Majority Element       | https://neetcode.io/problems/majority-element/question?list=neetcode250       | Arrays & Hashing | Easy       | Solved | Counting / candidate tracking |
| 9  | Design HashSet         | https://neetcode.io/problems/design-hashset/question?list=neetcode250         | Arrays & Hashing | Easy       | Solved | Hashing / bucket design       |
| 10 | Design HashMap         | https://neetcode.io/problems/design-hashmap/question?list=neetcode250         | Arrays & Hashing | Easy       | Solved | Hashing / key-value storage   |

---

## Problem 1: `Concatenation of Array`

**Link:** https://neetcode.io/problems/concatenation-of-array/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Build a new array twice the size of the original.
* Copy each value from the original array into both `i` and `i + n`.

### Final Approach

* One pass through the original array.
* Assign each element into both halves of the answer array.

### Data Structures Used

* Array / vector

### Complexity

**Time:** `O(n)`
**Space:** `O(n)`

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* When the output size is required to be larger than the input, extra space is expected and okay.

### Interview Explanation Practice

> I would create an output array of size `2n`. For every index `i` in the original array, I place `nums[i]` at both `ans[i]` and `ans[i + n]`. That gives me the original array repeated twice in one pass.

---

## Problem 2: `Contains Duplicate`

**Link:** https://neetcode.io/problems/duplicate-integer/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Track values that have already appeared.
* Return true as soon as I see a repeated value.

### Final Approach

* Use a hash set for `O(1)` average lookup.
* Iterate through the array once.

### Data Structures Used

* `unordered_set`

### Complexity

**Time:** `O(n)` average
**Space:** `O(n)`

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* Duplicate detection is usually a hash set problem.

### Interview Explanation Practice

> I scan the array once and store each value in a set. Before inserting a value, I check whether it already exists. If it does, I immediately know there is a duplicate.

---

## Problem 3: `Valid Anagram`

**Link:** https://neetcode.io/problems/is-anagram/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Count characters in one string.
* Subtract counts using the second string.
* Check whether all counts balance back to zero.

### Final Approach

* Use a fixed-size count array when the character set is limited to lowercase English letters.

### Data Structures Used

* Fixed-size integer array of length 26

### Complexity

**Time:** `O(n)`
**Space:** `O(1)` because the alphabet size is fixed

### Mistake I Made

* No major mistake logged today.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* When the character range is fixed, a small array can be simpler and faster than a hash map.

### Interview Explanation Practice

> Since both strings must contain the same characters with the same frequencies, I count each character from the first string and subtract each character from the second. If every count ends at zero, the strings are anagrams.

---

## Problem 4: `Two Sum`

**Link:** https://neetcode.io/problems/two-integer-sum/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* For each number, look for the number needed to reach the target.

### Final Approach

* Store previously seen values in a hash map from value to index.
* For each number, compute `target - nums[i]`.
* If the complement exists, return both indices.

### Data Structures Used

* `unordered_map`

### Complexity

**Time:** `O(n)` average
**Space:** `O(n)`

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* Pair-sum problems often become complement lookup problems.

### Interview Explanation Practice

> For each number, I calculate the complement needed to reach the target. If I have already seen that complement, I return the saved index and the current index. Otherwise, I store the current number and continue.

---

## Problem 5: `Longest Common Prefix`

**Link:** https://neetcode.io/problems/longest-common-prefix/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Compare characters across strings from left to right.

### Final Approach

* Use the first string as the candidate prefix.
* Shrink or compare until the common prefix no longer matches all strings.

### Data Structures Used

* Strings
* Array / vector of strings

### Complexity

**Time:** `O(n * m)` where `n` is number of strings and `m` is prefix length
**Space:** `O(1)` or `O(m)` depending on implementation

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* Prefix problems are about stopping at the first mismatch.

### Interview Explanation Practice

> I compare the strings character by character from the beginning. As soon as one string ends or a mismatch appears, I know the common prefix cannot continue past that point.

---

## Problem 6: `Group Anagrams`

**Link:** https://neetcode.io/problems/anagram-groups/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Medium
**Status:** Solved

### My First Approach

* Compare strings based on whether they are anagrams.

### Final Approach

* Convert each string into a normalized key.
* Use that key in a hash map to group all anagrams together.

### Data Structures Used

* `unordered_map`
* `vector`
* String key or frequency-count key

### Complexity

**Time:** `O(n * k)` with frequency keys, where `k` is max string length
**Space:** `O(n * k)`

### Mistake I Made

* No major mistake logged today, but this is a pattern worth reviewing because the key design matters.

### Why That Mistake Happened

* Grouping problems require recognizing what makes two inputs equivalent.

### What I Should Remember Next Time

* For anagrams, the order of characters does not matter; the character counts do.
* The key should represent the identity of the group.

### Interview Explanation Practice

> I need a way to make all anagrams produce the same key. I can either sort each string or build a frequency-count key. Then I use a hash map from that key to the list of strings that match it.

---

## Problem 7: `Remove Element`

**Link:** https://neetcode.io/problems/remove-element/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Remove or skip values equal to the target.

### Final Approach

* Use a write pointer.
* Copy only values that should remain.

### Data Structures Used

* Array / vector
* Two pointers

### Complexity

**Time:** `O(n)`
**Space:** `O(1)`

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* In-place array modification often uses a read pointer and a write pointer.

### Interview Explanation Practice

> I scan through the array with one pointer and keep another pointer for where the next valid value should go. When I see a value that should stay, I write it forward and increment the write pointer.

---

## Problem 8: `Majority Element`

**Link:** https://neetcode.io/problems/majority-element/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Count how many times each value appears.

### Final Approach

* Use counting or candidate tracking depending on the implementation.

### Data Structures Used

* Hash map for counts, or constant-space candidate tracking

### Complexity

**Time:** `O(n)`
**Space:** `O(n)` with map, or `O(1)` with Boyer-Moore candidate tracking

### Mistake I Made

* No major mistake logged.

### Why That Mistake Happened

* N/A

### What I Should Remember Next Time

* If the problem guarantees a majority element, there may be a constant-space voting solution.

### Interview Explanation Practice

> The straightforward solution is to count each number and return the one whose count passes half the array size. If optimizing space, I can use the majority vote idea because the majority element can cancel out all other values and still remain.

---

## Problem 9: `Design HashSet`

**Link:** https://neetcode.io/problems/design-hashset/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Store keys and check whether they exist.

### Final Approach

* Use buckets based on a hash index.
* Handle collisions inside the selected bucket.

### Data Structures Used

* Array / vector of buckets
* Linked list or nested vector depending on implementation

### Complexity

**Time:** `O(1)` average, `O(n)` worst case with heavy collisions
**Space:** `O(n)`

### Mistake I Made

* No major mistake logged today, but hash table design is worth continued review.

### Why That Mistake Happened

* Implementing a hash structure manually exposes details that built-in containers normally hide.

### What I Should Remember Next Time

* A hash set only needs to store keys.
* Collisions are expected and must be handled.

### Interview Explanation Practice

> I use a hash function to map each key to a bucket. If two keys map to the same bucket, I store them inside that bucket and search only within that smaller group.

---

## Problem 10: `Design HashMap`

**Link:** https://neetcode.io/problems/design-hashmap/question?list=neetcode250
**Category:** Arrays & Hashing
**Difficulty:** Easy
**Status:** Solved

### My First Approach

* Store key-value pairs and update the value when the key already exists.

### Final Approach

* Use buckets from a hash index.
* Store key-value nodes or pairs in each bucket.
* On `put`, update existing key or append a new pair.
* On `get`, search the bucket and return the matching value.
* On `remove`, unlink or erase the matching pair.

### Data Structures Used

* Array / vector of buckets
* Key-value pair nodes or nested containers

### Complexity

**Time:** `O(1)` average, `O(n)` worst case with heavy collisions
**Space:** `O(n)`

### Mistake I Made

* This area has been conceptually tricky because manual hash map implementation requires understanding pointers, bucket ownership, and collision handling.

### Why That Mistake Happened

* Built-in maps hide bucket storage, collision chains, and update/remove mechanics.
* In C++, pointer assignment can be confusing when modifying a local pointer versus the actual bucket entry.

### What I Should Remember Next Time

* A hash map stores both keys and values.
* Updating a local pointer does not automatically update the container slot unless I assign into the container itself.
* Collision handling is the core difference between a toy array lookup and an actual hash table.

### Interview Explanation Practice

> A hash map uses a hash function to choose a bucket for a key. Each bucket stores key-value pairs that collided into the same index. For `put`, I search the bucket and update the value if the key exists; otherwise I insert a new pair. For `get` and `remove`, I only search the relevant bucket.

---

# 💻 C++ Notes

## Concept Studied

**Topic:**
Using C++ as the first implementation language for DSA problems.

**What I learned:**

* C++ makes the data structure choices explicit, especially when using `vector`, `unordered_set`, and `unordered_map`.
* Solving in C++ first forces me to understand memory, mutation, references, and container behavior more clearly.
* Translating afterward into Python, Java, and TypeScript is useful because it separates the algorithm from the syntax.
* Hash maps and hash sets are central to Arrays & Hashing, so I need to get very comfortable with their C++ APIs.

**Code example:**

```cpp
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
```

**Common mistake to avoid:**

* Do not confuse checking existence with retrieving a value.
* For `unordered_set`, I only care whether the key exists.
* For `unordered_map`, I care about the key and its associated value.
* Be careful when mutating containers in loops; understand whether I am working with a copy, reference, pointer, or actual container slot.

**How I would explain this simply:**

> In C++, the container I choose should match the job. If I only need to know whether I have seen something, I use `unordered_set`. If I need to remember extra information tied to a key, I use `unordered_map`.

---

# 🏗️ System Design Notes

## Concept Studied

**Topic:**
No dedicated system design topic studied today.

**What I learned:**

* Current system design learning is book-based and should continue alongside DSA.
* Today's main focus was DSA and implementation practice.

**Why this matters in real systems:**

* Hashing is not only an interview trick. Real systems use hashing for lookups, partitioning, caching, load distribution, and indexing.

**Tradeoffs:**

| Option            | Pros                                  | Cons                           | When I would use it                                  |
| ----------------- | ------------------------------------- | ------------------------------ | ---------------------------------------------------- |
| Hash-based lookup | Fast average lookup and insert        | Collisions and memory overhead | When I need quick lookup by key                      |
| Array scan        | Simple and low overhead               | Slow for repeated lookup       | When input is small or only one pass is needed       |
| Sorting first     | Can simplify duplicate/grouping logic | Usually costs `O(n log n)`     | When ordered structure helps or hashing is not ideal |

**Interview phrasing:**

> I would use a hash-based structure when I need fast lookup by key and can afford the extra memory. If memory is more constrained or the input is already sorted, I would consider a pointer-based or sorting-based approach instead.

---

# 📚 Book Notes

## Book

**Title:** *A Tour of C++, 3rd Edition*
**Chapter / Section:** Not logged today

**Main ideas:**

* No specific C++ book section logged today.
* Current C++ learning is being reinforced through DSA implementation.

**Important concept or quote:**

> C++ practice is most useful when I connect language features directly to the data structures I am implementing.

**How this applies to interviews or real engineering:**

* Implementing DSA in C++ first helps expose whether I truly understand references, mutation, containers, and memory behavior.
* This should make interview explanations more precise.

**Questions I still have:**

* Which C++ topics from *A Tour of C++* should I pair with Arrays & Hashing practice first?
* How much manual implementation should I practice versus using STL containers directly?

---

## Book

**Title:** *System Design Interview, an Insider's Guide - Volume 1*
**Chapter / Section:** Not logged today

**Main ideas:**

* No specific system design book section logged today.

**Important concept or quote:**

> System design should stay active in the background, but today's main momentum came from DSA fundamentals.

**How this applies to interviews or real engineering:**

* DSA builds problem-solving precision.
* System design builds tradeoff thinking.
* Both need to be practiced consistently, but not necessarily in the same session.

**Questions I still have:**

* What system design chapter should pair best with the current hashing and storage concepts?

---

# 🧠 Pattern Recognition

## Patterns I Saw Today

* Use a **hash set** when checking for duplicates or prior existence.
* Use a **hash map** when storing a relationship like value → index, key → value, or signature → group.
* Use a **fixed-size array** when the key space is small and known, like lowercase English letters.
* Use a **write pointer** when modifying an array in place.
* Use a **normalized key** when grouping equivalent things.

## Problems This Pattern Applies To

* Contains Duplicate
* Valid Anagram
* Two Sum
* Group Anagrams
* Design HashSet
* Design HashMap
* Remove Element
* Majority Element

## Trigger Words / Clues

Examples:

* “contains duplicate”
* “seen before”
* “same characters”
* “group”
* “frequency”
* “target sum”
* “remove in-place”
* “design hash set”
* “design hash map”

My notes:

* When a problem sounds like "have I seen this before?", I should immediately consider a set.
* When it sounds like "what value is associated with this?", I should immediately consider a map.
* When it sounds like "same letters, different order", I should think frequency count or sorted key.
* When it says "in-place", I should think carefully about read/write pointers.

---

# 🧪 Testing & Debugging Notes

## Test Cases I Used

```txt
Input: nums = [1, 2, 3, 3]
Expected: true
Actual: true
```

```txt
Input: s = "racecar", t = "carrace"
Expected: true
Actual: true
```

```txt
Input: nums = [2, 7, 11, 15], target = 9
Expected: [0, 1]
Actual: [0, 1]
```

```txt
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
Expected: grouped anagrams together
Actual: grouped anagrams together
```

## Edge Cases I Forgot

* Not specifically logged today.

## Bugs I Ran Into

* No specific bug logged today.
* Main friction was conceptual: `Sort an Array` required sorting algorithm knowledge before implementation.

## What Caused the Bug?

* N/A

## How I Fixed It

* Paused the problem and decided to go through the sorting video tutorials/classes first.

---

# 🗣️ Communication Practice

## How clearly did I explain my solution?

**Rating:** 4 / 5

## What I said well

* I am starting to recognize when a problem is really asking for a hash set, hash map, or frequency counter.
* I can explain simple lookup-based solutions more clearly now.
* I am not just copying one language; I am implementing in C++ first and then translating the same logic across languages.

## What sounded awkward or unclear

* Sorting algorithms are not ready to explain yet.
* I should not try to bluff through `Sort an Array` until I understand the tradeoffs between common sorting approaches.

## Better version

> For Arrays & Hashing problems, I first identify what information I need to remember while scanning. If I only need existence, I use a set. If I need a relationship, I use a map. If I need counts over a small fixed range, I use an array. Then I explain the complexity based on how many times I scan the input and how much extra storage I use.

---

# 🔁 Add to Review Queue

| Item                         | Type    | Why I need to review it                                                     | Review Date |
| ---------------------------- | ------- | --------------------------------------------------------------------------- | ----------- |
| Sort an Array                | Problem | This was the first major blocker after the early Arrays & Hashing problems. | 2026-06-19  |
| Sorting Algorithms           | Concept | Need to understand sorting before implementing the problem correctly.       | 2026-06-19  |
| Hash Map / Hash Set Patterns | Concept | These are foundational to Arrays & Hashing and show up repeatedly.          | 2026-06-21  |

---

# ✅ Wins Today

Small wins count. What improved?

* Completed a strong first batch of NeetCode 250 problems.
* Built real momentum in the Arrays & Hashing section.
* Practiced solving in C++ first instead of defaulting to an easier language.
* Translated solutions into Python, Java, and TypeScript, which helps separate algorithm understanding from syntax.
* Recognized when to pause and learn a missing concept instead of forcing a bad solution.

---

# ⚠️ Friction Today

What slowed me down?

* `Sort an Array` introduced sorting algorithms and exposed a knowledge gap.
* Need to learn sorting fundamentals before moving forward confidently.
* Multi-language translation is useful, but it can also slow the session down if I get stuck on syntax instead of the core algorithm.

---

# 🧭 Tomorrow’s Plan

## Main Focus

* Learn sorting algorithms well enough to attempt `Sort an Array`.

## Problems to Do

* [ ] Sort an Array
* [ ] Redo or review Group Anagrams
* [ ] Redo or review Design HashMap if pointer/bucket logic still feels fuzzy

## Concepts to Review

* [ ] Merge sort
* [ ] Quick sort
* [ ] Heap sort
* [ ] Time and space complexity tradeoffs for sorting
* [ ] When sorting is better than hashing

## Reading Goal

* [ ] Read a small section from *A Tour of C++, 3rd Edition* that supports current C++ DSA practice.
* [ ] Continue *System Design Interview, an Insider's Guide - Volume 1* when DSA session is complete.

---

# 🧠 One-Sentence Takeaway

> Today I built strong Arrays & Hashing momentum, but `Sort an Array` showed me that the next step is learning sorting algorithms instead of trying to brute-force my way through a concept gap.

</details>

---

# Weekly Review

<details>
<summary><strong>🗓️ Week of 2026-06-15 — Weekly Review</strong></summary>

<br>

## Biggest Improvements This Week

* Started the interview prep journal and formalized the prep process.
* Built early momentum through NeetCode Arrays & Hashing.
* Practiced implementing solutions in C++ first, then translating to Python, Java, and TypeScript.

## Most Common Mistakes

* Not enough data yet.
* Early signal: sorting algorithms need focused review before continuing past Arrays & Hashing basics.

## Patterns I’m Starting to Recognize

* Hash set for duplicate/existence checks.
* Hash map for complement lookup and grouping.
* Frequency array/map for anagrams and counting.
* Write pointer for in-place array modification.

## Problems I Need to Redo

| Problem        | Topic            | Reason                                                                                     | Redo Date  |
| -------------- | ---------------- | ------------------------------------------------------------------------------------------ | ---------- |
| Sort an Array  | Sorting          | First major blocker; need sorting algorithm background first.                              | 2026-06-19 |
| Group Anagrams | Arrays & Hashing | Good review problem for normalized keys and grouping.                                      | 2026-06-21 |
| Design HashMap | Arrays & Hashing | Important for understanding manual hashing, buckets, collisions, and C++ pointer behavior. | 2026-06-21 |

## Concepts I Need to Review

* Sorting algorithms
* Hash map collision handling
* Frequency counting
* In-place array modification
* C++ container mutation

## Best Interview Explanation I Practiced

> If I need to remember whether I have already seen something, I use a hash set. If I need to remember information associated with a value, I use a hash map. That lets me turn repeated searching into average constant-time lookup.

## What I Should Focus on Next Week

* Finish the sorting lessons.
* Attempt and understand `Sort an Array`.
* Keep moving through NeetCode Arrays & Hashing.
* Keep translating solutions after the C++ implementation, but do not let syntax translation replace understanding.

</details>

---

# Master Problem Tracker

| Problem                | Topic            | Difficulty | Status  | Attempts | Last Attempt | Redo Date  | Notes                                                                                 |
| ---------------------- | ---------------- | ---------- | ------- | -------- | ------------ | ---------- | ------------------------------------------------------------------------------------- |
| Concatenation of Array | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Basic array construction; output is intentionally `2n`.                               |
| Contains Duplicate     | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Hash set pattern for existence / seen-before checks.                                  |
| Valid Anagram          | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Frequency counting; fixed-size array works well for lowercase English letters.        |
| Two Sum                | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Hash map complement lookup.                                                           |
| Longest Common Prefix  | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | String scanning; stop at first mismatch.                                              |
| Group Anagrams         | Arrays & Hashing | Medium     | Solved  | 1        | 2026-06-18   | 2026-06-21 | Important grouping problem; review normalized key design.                             |
| Remove Element         | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | In-place write pointer pattern.                                                       |
| Majority Element       | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Counting solution works; review Boyer-Moore later for `O(1)` space.                   |
| Design HashSet         | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   |            | Manual hashing; review buckets and collision handling.                                |
| Design HashMap         | Arrays & Hashing | Easy       | Solved  | 1        | 2026-06-18   | 2026-06-21 | Manual key-value hashing; important for bucket ownership and pointer behavior in C++. |
| Sort an Array          | Sorting          | Medium     | Revisit | 0        | 2026-06-18   | 2026-06-19 | Paused before attempting; need to learn sorting algorithms first.                     |

---

# Master Concept Tracker

| Concept                        | Category      | Confidence | Last Reviewed | Notes                                                                                                                      |
| ------------------------------ | ------------- | ---------- | ------------- | -------------------------------------------------------------------------------------------------------------------------- |
| Arrays                         | DSA           | Medium     | 2026-06-18    | Comfortable with basic scanning, construction, and in-place modification.                                                  |
| Hash Set                       | DSA           | Medium     | 2026-06-18    | Useful for duplicate/existence checks.                                                                                     |
| Hash Map                       | DSA           | Medium     | 2026-06-18    | Useful for complement lookup, key-value storage, and grouping. Needs more review for manual implementation details.        |
| Frequency Counting             | DSA           | Medium     | 2026-06-18    | Used for anagrams and character counting. Fixed-size arrays are useful when key range is known.                            |
| Grouping by Normalized Key     | DSA           | Medium     | 2026-06-18    | Used in Group Anagrams; key design is the main idea.                                                                       |
| In-Place Array Modification    | DSA           | Medium     | 2026-06-18    | Remove Element reinforced read/write pointer pattern.                                                                      |
| Sorting Algorithms             | DSA           | Low        | 2026-06-18    | Next major topic; needed for Sort an Array.                                                                                |
| Time / Space Complexity        | DSA           | Medium     | 2026-06-18    | Practiced with Arrays & Hashing problems; sorting will add more tradeoff depth.                                            |
| STL Containers                 | C++           | Medium     | 2026-06-18    | Practicing `vector`, `unordered_set`, and `unordered_map` through NeetCode problems.                                       |
| Pointers                       | C++           | Medium     | 2026-06-18    | Important for manual hash map/hash set implementations; need to keep reviewing local pointer vs actual container mutation. |
| C++ Multi-Language Translation | C++           | Medium     | 2026-06-18    | Solving in C++ first, then translating to Python, Java, and TypeScript.                                                    |
| Caching                        | System Design | Low        |               | Not studied yet in this journal.                                                                                           |
| Hashing in Real Systems        | System Design | Low        | 2026-06-18    | Hashing connects to partitioning, caching, indexing, and fast lookup.                                                      |
| System Design Fundamentals     | System Design | Low        | 2026-06-18    | Reading *System Design Interview, an Insider's Guide - Volume 1*.                                                          |
