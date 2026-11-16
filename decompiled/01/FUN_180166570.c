// FUN_180166570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166570 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180166570(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [32];
  undefined8 ***local_88;
  undefined8 *local_80;
  undefined **local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  undefined8 ***local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_88 = &DAT_1808da958;
  if (0xf < DAT_1808da970) {
    local_88 = (undefined8 ***)DAT_1808da958;
  }
  local_68 = &PTR_180700558;
  local_60 = 0;
  local_80 = (undefined8 *)DAT_1808da968;
  ppuVar1 = (undefined8 **)FUN_180165e50(local_58,&local_88,&local_68);
  local_88 = (undefined8 ***)ppuVar1;
  if ((undefined8 *)0xf < ppuVar1[3]) {
    local_88 = (undefined8 ***)*ppuVar1;
  }
  local_80 = ppuVar1[2];
  FUN_180165be0(local_38,&local_88);
  FUN_18015c010(local_58);
  if (0x20 < local_28) {
    local_28 = 0x20;
    pppuVar2 = local_38;
    if (7 < local_20) {
      pppuVar2 = local_38[0];
    }
    *(undefined2 *)(pppuVar2 + 8) = 0;
  }
  if (local_28 != 0) {
    pppuVar2 = local_38;
    if (7 < local_20) {
      pppuVar2 = local_38[0];
    }
    if (0xd7ff < *(ushort *)((longlong)pppuVar2 + local_28 * 2 + -2)) {
      pppuVar2 = local_38;
      if (7 < local_20) {
        pppuVar2 = local_38[0];
      }
      if (*(ushort *)((longlong)pppuVar2 + local_28 * 2 + -2) < 0xdc00) {
        local_28 = local_28 - 1;
        pppuVar2 = local_38;
        if (7 < local_20) {
          pppuVar2 = local_38[0];
        }
        *(undefined2 *)((longlong)pppuVar2 + local_28 * 2) = 0;
      }
    }
  }
  local_88 = local_38;
  if (7 < local_20) {
    local_88 = local_38[0];
  }
  local_80 = (undefined8 *)local_28;
  FUN_180165d20(param_1,&local_88);
  FUN_18015b930(local_38);
}



