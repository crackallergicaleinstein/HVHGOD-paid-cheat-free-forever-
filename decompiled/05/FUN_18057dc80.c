// FUN_18057dc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057dc80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18057dc80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined1 auStack_98 [32];
  int local_78;
  uint local_74;
  int local_70 [2];
  longlong local_68;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  local_68 = param_2;
  iVar8 = FUN_180577910(param_2,0x756e6963);
  if (iVar8 == 0) {
    FUN_180585b30(param_1,param_2);
    iVar8 = FUN_180584f30(param_1,param_2);
    if (iVar8 != 0) goto LAB_18057de71;
    pcVar9 = local_60;
    builtin_strncpy(local_60 + 0x10,"8 9",4);
    bVar6 = false;
    iVar8 = 0;
    uVar12 = 1;
    local_78 = 0;
    builtin_strncpy(local_60,"0 1 2 3 4 5 6 7 ",0x10);
    do {
      pcVar9 = (char *)FUN_1805871d0(pcVar9,param_1,local_70,&local_74);
      iVar7 = local_70[0];
      if ((local_74 < 2) &&
         (FUN_1805737a0(**(undefined8 **)(param_1 + 0x30),local_70[0],0x803,&local_78), iVar7 != 0))
      {
        if (bVar6) {
          if (local_78 != iVar8) {
            uVar12 = 0;
            break;
          }
        }
        else {
          bVar6 = true;
          iVar8 = local_78;
        }
      }
    } while (*pcVar9 != '\0');
    *(undefined1 *)(param_1 + 0x28) = uVar12;
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
  uVar5 = *(undefined8 *)(lVar3 + 0x88);
  local_78 = FUN_180579a10(lVar3);
  if (local_78 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar10 = FUN_18057abe0(uVar4,0x28,&local_78);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    if ((local_78 == 0) && (local_78 = FUN_18057a320(uVar10,uVar4), local_78 == 0)) {
      uVar11 = 0;
      do {
        uVar1 = *(undefined4 *)((longlong)&DAT_1808d40e0 + uVar11);
        iVar8 = FUN_1805738d0(lVar3,uVar1);
        if ((iVar8 != 0) &&
           (local_78 = FUN_18057a3b0(iVar8,uVar1,*(undefined8 *)(param_1 + 0x38),uVar4),
           local_78 != 0)) break;
        uVar11 = uVar11 + 8;
      } while (uVar11 < 0x1d38);
      param_2 = local_68;
    }
  }
  *(undefined8 *)(lVar3 + 0x88) = uVar5;
  if (local_78 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_18057a400(*(longlong *)(param_1 + 0x38),uVar4);
    }
    FUN_18057abd0(uVar4,*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
LAB_18057de71:
  *(undefined8 *)(param_2 + 0x88) = uVar2;
}



