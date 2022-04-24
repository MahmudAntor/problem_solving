import {ListNode} from './ListNode.js';
const list = new ListNode([1,2,3,4,5]);

/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
 var reorderList = function(head) {
    if (!head || !head.next) return;
    let slow = head, fast = head;
    while (fast.next && fast.next.next) {
        slow = slow.next;
        fast = fast.next.next;
    }
    let second = slow.next;
    slow.next = null;
    second = reverse(second);
    let first = head;
    while (second) {
        let temp = second.next;
        second.next = first.next;
        first.next = second;
        first = first.next.next;
        second = temp;
    }
    return head;
    
};

function reverse(head) {
    let prev = null;
    while (head) {
        let temp = head.next;
        head.next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}

console.log(reorderList(list));