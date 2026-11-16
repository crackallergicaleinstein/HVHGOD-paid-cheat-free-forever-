// FUN_1800d0040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d0040 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d0040(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 uStack_b0;
  char *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar6 = *plVar1;
  cVar3 = *(char *)((longlong)*(longlong **)(lVar6 + 8) + 0x19);
  plVar8 = *(longlong **)(lVar6 + 8);
  while (cVar3 == '\0') {
    FUN_1800f9830(plVar1,plVar1,plVar8[2]);
    plVar2 = (longlong *)*plVar8;
    FUN_1804547d0(plVar8,0x20);
    plVar8 = plVar2;
    cVar3 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*param_2 == '\x02') && (uVar4 = FUN_1800f3d40(param_2), uVar4 < 0x1001)) {
    local_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_1800f3f60(param_2,&local_58);
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    FUN_1800f3e20(param_2,&local_78);
    cVar3 = FUN_1800e6ca0(&local_58,&local_78);
    while (cVar3 == '\0') {
      pcVar5 = (char *)FUN_1800f3560(&local_58);
      if (((*pcVar5 == '\x06') ||
          ((*pcVar5 == '\x05' && (lVar6 = FUN_1800e6630(pcVar5), -1 < lVar6)))) &&
         (uVar4 = FUN_1800ea2a0(pcVar5), uVar4 < 0x100000000)) {
        plVar8 = (longlong *)*plVar1;
        local_b8 = (longlong *)plVar8[1];
        uVar9 = 0;
        uVar10 = (uint)uVar4;
        if (*(char *)((longlong)local_b8 + 0x19) == '\0') {
          plVar2 = local_b8;
          do {
            local_b8 = plVar2;
            bVar11 = uVar10 <= *(uint *)((longlong)local_b8 + 0x1c);
            if (bVar11) {
              plVar7 = local_b8;
              plVar8 = local_b8;
            }
            else {
              plVar7 = local_b8 + 2;
            }
            uVar9 = (uint)bVar11;
            plVar2 = (longlong *)*plVar7;
          } while (*(char *)(*plVar7 + 0x19) == '\0');
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar9);
        if ((*(char *)((longlong)plVar8 + 0x19) != '\0') ||
           (uVar10 < *(uint *)((longlong)plVar8 + 0x1c))) {
          if (*(longlong *)(param_1 + 0x10) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1800a7740();
          }
          lVar6 = *plVar1;
          local_80 = 0;
          local_88 = plVar1;
          if (DAT_180c7df28 == (undefined8 *)0x0) {
            local_98 = "tier0.dll:g_pMemAlloc";
            local_90 = 0x15;
            DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_98);
          }
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
          *(uint *)((longlong)plVar8 + 0x1c) = uVar10;
          *plVar8 = lVar6;
          plVar8[1] = lVar6;
          plVar8[2] = lVar6;
          *(undefined2 *)(plVar8 + 3) = 0;
          local_80 = 0;
          FUN_180140480(plVar1,&local_b8,plVar8);
        }
      }
      FUN_1800f33e0(&local_58);
      cVar3 = FUN_1800e6ca0(&local_58,&local_78);
    }
  }
}



