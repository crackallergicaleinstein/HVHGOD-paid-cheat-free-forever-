// FUN_180414b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414b40 */

ulonglong FUN_180414b40(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_28 [25];
  undefined7 uStack_f;
  
  if ((((param_2 == 0) || (~param_2 < 8)) ||
      (lVar2 = *(longlong *)(param_1 + 0x5808), 0x4000U - lVar2 < 8)) ||
     (0xbf < *(ulonglong *)(param_1 + 0x5800))) {
    FUN_18015c090(local_28,"prediction snapshot exceeds transaction capacity");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_28,&DAT_1808d12a8);
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  cVar3 = FUN_1804514f0(param_1 + 0x1800 + lVar2,param_2,8);
  uVar5 = FUN_18017ea70();
  if (*(int *)(uVar5 + 4) != 0) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
  }
  if (cVar3 == '\0') {
    return uVar5 & 0xffffffffffffff00;
  }
  lVar4 = *(longlong *)(param_1 + 0x5800);
  uVar5 = *(ulonglong *)(param_1 + 0x5808);
  lVar2 = lVar4 + 1;
  *(longlong *)(param_1 + 0x5800) = lVar2;
  puVar1 = (ulonglong *)(lVar4 * 0x20 + param_1);
  *puVar1 = param_2;
  puVar1[1] = uVar5;
  puVar1[2] = 8;
  puVar1[3] = CONCAT71(uStack_f,1);
  *(longlong *)(param_1 + 0x5808) = *(longlong *)(param_1 + 0x5808) + 8;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



