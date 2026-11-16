// FUN_1802b8720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b8720 */

void FUN_1802b8720(ulonglong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  ulonglong local_res8;
  float local_res10 [2];
  
  if (param_2 == 0) {
    return;
  }
  lVar5 = param_2 + 0x551;
  if (lVar5 == 0) {
    return;
  }
  local_res8 = param_1 & 0xffffffffffffff00;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  cVar1 = FUN_1804514c0(&local_res8,lVar5,1);
  if (cVar1 != '\0') {
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    if (DAT_180b0ccf8 != '\0') {
      lVar3 = param_2 + 0x498;
      if (lVar3 == 0) {
        return;
      }
      fVar6 = 0.0;
      local_res10[0] = 0.0;
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      cVar1 = FUN_1804514c0(local_res10,lVar3,4);
      if (cVar1 == '\0') {
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) == 0) {
          return;
        }
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        return;
      }
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      fVar7 = local_res10[0];
      sVar2 = thunk_FUN_180624430(local_res10[0]);
      if (0 < sVar2) {
        return;
      }
      sVar2 = thunk_FUN_180624430(DAT_180b0cd60);
      if (0 < sVar2) {
        return;
      }
      if (DAT_180b0cd60 <= fVar6) {
        return;
      }
      fVar6 = (float)FUN_180639470(fVar7 * 0.008726646);
      local_res10[0] = (float)FUN_1806370a0(fVar6 * DAT_180b0cd60 * 0.75);
      local_res10[0] = local_res10[0] * 114.59155;
      sVar2 = thunk_FUN_180624430();
      if (0 < sVar2) {
        return;
      }
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      FUN_1801ad800(lVar3,local_res10);
      lVar3 = FUN_18017ea70();
      if (*(int *)(lVar3 + 4) != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
      }
      if (param_2 + 0x4d4 != 0) {
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        FUN_1801ad800(param_2 + 0x4d4,&DAT_180b0cd60);
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
      }
      if ((local_res8 & 2) != 0) {
        return;
      }
      local_res8 = local_res8 | 2;
      lVar3 = FUN_18017ea70();
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      FUN_1801ad7b0(lVar5,&local_res8);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) == 0) {
        return;
      }
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      return;
    }
    if ((local_res8 & 2) == 0) {
      return;
    }
    local_res8 = local_res8 & 0xfffffffffffffffd;
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    FUN_1801ad7b0(lVar5,&local_res8);
  }
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) == 0) {
    return;
  }
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  return;
}



