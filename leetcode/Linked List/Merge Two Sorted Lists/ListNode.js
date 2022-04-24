export class ListNode {
    constructor(array) {
        this.val = array[0];
        this.next = array.length > 1 ? new ListNode(array.slice(1)) : null;
    }
}