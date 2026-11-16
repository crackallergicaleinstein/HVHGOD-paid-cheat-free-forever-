// FUN_1803de270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803de270 */

void FUN_1803de270(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong local_18 [2];
  
  if (*DAT_180c72060 == 0) {
    DAT_180b0dfb0 = 0;
  }
  else {
    lVar2 = FUN_1803df740();
    DAT_180b0dfb0 = lVar2;
    if (lVar2 != 0) {
      if (lVar2 + 0x60 == 0) {
        bVar6 = false;
      }
      else {
        local_18[0] = 0;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        cVar1 = FUN_1804514c0(local_18,lVar2 + 0x60,8);
        bVar6 = cVar1 != '\0';
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
      }
      uVar5 = local_18[0];
      if (!bVar6) {
        uVar5 = 0;
      }
      if (lVar2 + 8 == 0) {
        bVar6 = false;
      }
      else {
        local_18[0] = 0;
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        cVar1 = FUN_1804514c0(local_18,lVar2 + 8,8);
        bVar6 = cVar1 != '\0';
        lVar2 = FUN_18017ea70();
        if (*(int *)(lVar2 + 4) != 0) {
          *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
        }
      }
      uVar4 = local_18[0];
      if (!bVar6) {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        DAT_180b0dfb8 = uVar4;
        DAT_180b0dfc0 = 0;
        return;
      }
      if ((uVar5 >> 0x21 & 1) == 0) {
        DAT_180b0dfb8 = uVar4;
        DAT_180b0dfc0 = 0;
        return;
      }
      if (uVar4 == DAT_180b0dfb8) {
        DAT_180b0dfb8 = uVar4;
        return;
      }
      DAT_180b0dfc0 = GetTickCount64();
      DAT_180b0dfb8 = uVar4;
      return;
    }
  }
  DAT_180b0dfc0 = 0;
  DAT_180b0dfb8 = 0;
  return;
}



