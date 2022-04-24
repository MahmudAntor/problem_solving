export class ListNodeCycle{
    constructor(array, isCyclick){
        this.val = array[0];
        this.next = array.length > 1 ? new ListNodeCycle(array.slice(1), isCyclick) : null;
        if(isCyclick) this.next = this;
    }
}
