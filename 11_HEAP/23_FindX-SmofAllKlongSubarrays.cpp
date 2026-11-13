// . Logic
// - Traverse every window of size k.
// - Count frequencies using unordered_map.
// - Push every (frequency, value) into a Max Heap.
// - Heap automatically keeps:
//   - Higher frequency first.
//   - If frequency equal → larger value first.
// - Pop x elements from heap.
// - Add