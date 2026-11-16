// FUN_1803d0ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d0ea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803d0ea0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  ULONGLONG UVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (param_2[1] != 0) {
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    FUN_18015ba30(local_68,*param_2,param_2[1]);
    plVar2 = (longlong *)FUN_1803d2190(param_1 + 0x3888,local_40,local_68);
    lVar5 = *plVar2;
    plVar2 = (longlong *)(lVar5 + 0x30);
    FUN_18015c010(local_68);
    if ((*plVar2 == 0) && (UVar3 = GetTickCount64(), *(ulonglong *)(lVar5 + 0x40) <= UVar3)) {
      *(ULONGLONG *)(lVar5 + 0x40) = UVar3 + 5000;
      local_30 = (undefined1  [16])0x0;
      local_20 = 0;
      local_78 = *param_2;
      lStack_70 = param_2[1];
      cVar1 = FUN_1803cfed0(&local_78,local_30);
      if (cVar1 != '\0') {
        local_78 = local_30._0_8_;
        lStack_70 = local_30._8_8_ - local_30._0_8_;
        plVar4 = (longlong *)FUN_180437520(local_88,&local_78,lVar5 + 0x38,lVar5 + 0x3c);
        lVar5 = 0;
        if (&local_48 != plVar4) {
          lVar5 = *plVar4;
          *plVar4 = 0;
        }
        plVar4 = (longlong *)*plVar2;
        *plVar2 = lVar5;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        plVar2 = local_88[0];
        if (local_88[0] != (longlong *)0x0) {
          local_88[0] = (longlong *)0x0;
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      FUN_180113710(local_30);
    }
  }
}



