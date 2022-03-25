import {ListNodeCycle} from './ListNodeCycle.js';
const list = new ListNodeCycle([1,2,3], false);

/**
 * @param {ListNode} head
 * @return {boolean}
 */
 var hasCycle = function(head) {
    if(!head) return false;
    var fast = head;
    var slow = head;
    while(fast.next && fast.next.next){
        fast = fast.next.next;
        slow = slow.next;
        if(fast === slow) return true;
    }
    return false;    
};

console.log(hasCycle(list));