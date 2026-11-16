// FUN_1802dc620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dc620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 *
FUN_1802dc620(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  undefined8 local_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_148 [140];
  undefined8 local_bc;
  undefined8 uStack_b4;
  float local_9c;
  char local_8d;
  char local_40;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_178 = _DAT_180bb8890;
  lStack_170 = lRam0000000180bb8898;
  lStack_168 = lRam0000000180bb88a0;
  uStack_160 = uRam0000000180bb88a8;
  cVar4 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar1 = lStack_170;
  lVar3 = lStack_168;
  if (cVar4 != '\0') {
    lVar3 = lStack_170;
  }
  if (lVar3 != 0) {
    local_150 = param_6;
    lStack_170 = CONCAT44(lStack_170._4_4_,param_5);
    local_178 = CONCAT44(param_4,param_3);
    local_158 = param_3;
    local_154 = param_4;
    FUN_180417de0(lVar1,local_148,&local_178,&local_158,lVar3,0x1c3003);
    if (local_40 != '\0') {
      if (((local_8d == '\0') && (sVar2 = thunk_FUN_180624430(local_9c), sVar2 < 1)) &&
         (local_9c < 1.0)) {
        lStack_168 = CONCAT71(lStack_168._1_7_,1);
        *param_2 = local_bc;
        param_2[1] = uStack_b4;
        *(uint *)(param_2 + 2) = (uint)lStack_168;
        *(undefined1 *)((longlong)param_2 + 0x14) = 1;
        return param_2;
      }
      lStack_168._0_4_ = (uint)lStack_168 & 0xffffff00;
      *param_2 = 0;
      param_2[1] = 0x3f80000000000000;
      *(uint *)(param_2 + 2) = (uint)lStack_168;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      return param_2;
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  return param_2;
}



