// FUN_180256380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180256380 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180256380(undefined8 *param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  undefined4 local_648;
  double local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  lVar3 = *(longlong *)*param_1;
  if (lVar3 != 0) {
    *(ulonglong *)(lVar3 + 0x60) = *(ulonglong *)(lVar3 + 0x60) & 0xfffffffffffffffe;
    *(ulonglong *)(lVar3 + 0x68) = *(ulonglong *)(lVar3 + 0x68) | 1;
    *(ulonglong *)(lVar3 + 0x70) = *(ulonglong *)(lVar3 + 0x70) & 0xfffffffffffffffe;
  }
  lVar3 = *(longlong *)*param_1;
  puVar1 = (uint *)(lVar3 + 0x20);
  *puVar1 = *puVar1 | 0x20;
  *(undefined4 *)(lVar3 + 0x4c) = 0xffffffff;
  iVar2 = *(int *)(param_1[1] + 0x90);
  if (((iVar2 < 0) || (*(int *)param_1[2] < iVar2)) || (0x1f < *(int *)param_1[2] - iVar2)) {
    *(undefined4 *)(param_1[1] + 0x90) = *(undefined4 *)param_1[2];
    FUN_18063ab10(local_638,0,0x600);
    local_640 = (double)param_4;
    local_650 = (char *)CONCAT44(local_650._4_4_,*(undefined4 *)param_1[2]);
    local_658 = (undefined **)param_2;
    local_648 = param_3;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "reason=%s client_tick=%d ready_tick=%d ready_fraction=%.6f");
    local_658 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_658 = (undefined **)&DAT_1806bcfc0;
    }
    local_650 = local_638;
    FUN_1800f6900(0);
  }
}



