// FUN_1802fb6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fb6e0 */

void FUN_1802fb6e0(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char local_18 [16];
  
  lVar3 = DAT_180bbf100;
  if (DAT_180bbf109 == '\0') {
    return;
  }
  if (DAT_180bbf100 != 0) {
    local_18[0] = '\0';
    lVar2 = FUN_18017ea70();
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    cVar1 = FUN_1804514c0(local_18,lVar3,1);
    if (cVar1 == '\0') {
      lVar3 = FUN_18017ea70();
      if (*(int *)(lVar3 + 4) != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
      }
    }
    else {
      lVar3 = FUN_18017ea70();
      if (*(int *)(lVar3 + 4) != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
      }
      lVar3 = DAT_180bbf100;
      if ((local_18[0] == '\0') && (DAT_180bbf108 != '\0')) {
        local_18[0] = DAT_180bbf108;
        if (DAT_180bbf100 == 0) {
          return;
        }
        lVar2 = FUN_18017ea70();
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
        cVar1 = FUN_1801ad7b0(lVar3,local_18);
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
  }
  DAT_180bbf110 = 0;
  DAT_180bbf109 = 0;
  DAT_180bbf100 = 0;
  return;
}



