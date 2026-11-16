// FUN_1803de490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803de490 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803de490(undefined8 param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  ULONGLONG UVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 extraout_XMM0_Qa;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  char *local_680;
  double local_678;
  double local_670;
  float local_668;
  undefined1 local_664 [28];
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x20) & 1) != 0)) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    puVar6 = (uint *)0x0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      puVar6 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
    }
    if (puVar6 != (uint *)0x0) {
      puVar5 = (uint *)0x0;
      if (*(longlong *)(puVar6 + 0xc) != 0) {
        puVar5 = (uint *)(*(longlong *)(puVar6 + 0xc) + 0x10);
      }
      if (puVar5 != (uint *)0x0) {
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        local_668 = 0.0;
        local_664._0_16_ = (undefined1  [16])0x0;
        cVar1 = FUN_1804514f0(&local_668,puVar5,0x14);
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
        if ((cVar1 != '\0') && ((*puVar6 & 4) == 0)) {
          cVar1 = FUN_1804513c0(puVar5,0x14,1);
          if ((cVar1 != '\0') && (cVar1 = FUN_1804513c0(puVar6,0x78,1), cVar1 != '\0')) {
            FUN_1803dff30(extraout_XMM0_Qa,&local_668);
            fVar9 = local_668;
            sVar2 = thunk_FUN_180624430(local_668);
            if (sVar2 < 1) {
              fVar7 = (float)local_664._0_4_;
              sVar2 = thunk_FUN_180624430(local_664._0_4_);
              if (sVar2 < 1) {
                fVar8 = (float)local_664._4_4_;
                sVar2 = thunk_FUN_180624430(local_664._4_4_);
                if (sVar2 < 1) {
                  if ((*puVar6 & 4) == 0) {
                    *puVar5 = *puVar5 | 7;
                    puVar5[2] = (uint)fVar9;
                    puVar5[3] = (uint)fVar7;
                    puVar5[4] = (uint)fVar8;
                    *puVar6 = *puVar6 | 4;
                  }
                  UVar4 = GetTickCount64();
                  if (DAT_180c72058 <= UVar4) {
                    DAT_180c72058 = UVar4 + 2000;
                    FUN_18063ab10(local_648,0,0x600);
                    local_688 = *(undefined ***)(param_2 + 8);
                    local_670 = (double)fVar8;
                    local_678 = (double)fVar7;
                    local_680 = (char *)(double)fVar9;
                    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                                  "command=%lld camera=(%.3f,%.3f,%.3f) source=live_camera allocated_message=1"
                                 );
                    local_688 = &PTR_180700558;
                    if (local_648[0] != '\0') {
                      local_688 = (undefined **)&DAT_1806bcfc0;
                    }
                    local_680 = local_648;
                    FUN_1800f6900(0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



