// FUN_180454280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454280 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180454280(undefined1 (*param_1) [16],ulonglong param_2,ulonglong param_3)

{
  LPCVOID lpAddress;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  SIZE_T SVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined1 local_1d8;
  undefined1 (*local_1d0) [16];
  ulonglong local_1c0;
  undefined1 (*local_1b8) [16];
  undefined8 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  _MEMORY_BASIC_INFORMATION local_198;
  undefined1 local_168 [16];
  longlong lStack_158;
  ulonglong uStack_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    lStack_158 = 0;
    uStack_150 = 0xf;
    local_168._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_168._1_15_;
    local_168 = auVar1 << 8;
    uVar6 = param_3;
    if (0x100 < param_3) {
      uVar6 = 0x100;
    }
    local_1d0 = param_1;
    local_1c0 = param_3;
    local_1b8 = param_1;
    FUN_1800f5540(local_168,uVar6);
    FUN_18063ab10(local_148,0,0x100);
    uVar6 = 0;
    if (param_3 != 0) {
      while ((uVar6 <= ~param_2 &&
             (lpAddress = (LPCVOID)(uVar6 + param_2), lpAddress != (LPCVOID)0x0))) {
        local_198.BaseAddress = (LPCVOID)0x0;
        local_198.AllocationBase = (PVOID)0x0;
        local_198.AllocationProtect = 0;
        local_198._20_4_ = 0;
        local_198.RegionSize = 0;
        local_198.State = 0;
        local_198.Protect = 0;
        local_198.Type = 0;
        local_198._44_4_ = 0;
        SVar4 = VirtualQuery(lpAddress,&local_198,0x30);
        if ((SVar4 == 0) ||
           ((((~(ulonglong)local_198.BaseAddress < local_198.RegionSize ||
              (lpAddress < local_198.BaseAddress)) ||
             ((LPCVOID)(local_198.RegionSize + (longlong)local_198.BaseAddress) <= lpAddress)) ||
            ((local_198.State != 0x1000 || ((local_198.Protect & 0x101) != 0)))))) break;
        switch(local_198.Protect & 0xff) {
        case 2:
        case 4:
        case 8:
        case 0x20:
        case 0x40:
        case 0x80:
          local_1b0 = 0x100;
          local_1a8 = param_3 - uVar6;
          local_1a0 = (longlong)(local_198.RegionSize + (longlong)local_198.BaseAddress) -
                      (longlong)lpAddress;
          lVar5 = thunk_FUN_1805f8430(&local_1b0,&local_198);
          if ((lVar5 == 0) || (cVar3 = FUN_1804514c0(local_148,lpAddress,lVar5), cVar3 == '\0'))
          goto switchD_1804543e2_caseD_3;
          local_1d0 = (undefined1 (*) [16])thunk_FUN_1805f7e70(local_148,local_148 + lVar5,0);
          uVar8 = (longlong)local_1d0 - (longlong)local_148;
          if (uStack_150 - lStack_158 < uVar8) {
            local_1e8 = uVar8;
            FUN_18015b150(local_168,uVar8,local_1d8,local_148);
          }
          else {
            puVar7 = local_168;
            if (0xf < uStack_150) {
              puVar7 = (undefined1 *)local_168._0_8_;
            }
            puVar7 = puVar7 + lStack_158;
            lStack_158 = lStack_158 + uVar8;
            FUN_18063aed0(puVar7,local_148,uVar8);
            puVar7[uVar8] = 0;
          }
          if ((local_1d0 != (undefined1 (*) [16])(local_148 + lVar5)) ||
             (uVar6 = uVar6 + lVar5, param_3 = local_1c0, local_1c0 <= uVar6))
          goto switchD_1804543e2_caseD_3;
          break;
        default:
          goto switchD_1804543e2_caseD_3;
        }
      }
switchD_1804543e2_caseD_3:
      param_1 = local_1b8;
    }
    *(undefined8 *)*param_1 = local_168._0_8_;
    *(undefined8 *)(*param_1 + 8) = local_168._8_8_;
    *(longlong *)param_1[1] = lStack_158;
    *(ulonglong *)(param_1[1] + 8) = uStack_150;
    lStack_158 = 0;
    uStack_150 = 0xf;
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_168._1_15_;
    local_168 = auVar2 << 8;
    FUN_18015c010(local_168);
  }
}



