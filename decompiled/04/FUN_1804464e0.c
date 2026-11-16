// FUN_1804464e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804464e0 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1804464e0(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  
  lVar5 = *param_3;
  if (*(char *)(param_1 + 10) == '\0') {
    if ((*(ulonglong *)(lVar5 + 0x20) & 0x100000000) == 0) {
LAB_180446e50:
      if ((*(ulonglong *)(*param_3 + 0x20) & 0x200000000) != 0) {
        if (*param_2 == '\0') {
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_xrelease_18076b4c8,
                                *(undefined4 *)(param_1 + 0x34));
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        else {
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xfU) goto LAB_180446d9c;
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
          *puVar7 = 0x61656c6572780905;
          *(undefined4 *)(puVar7 + 1) = 0x1006573;
          *(undefined2 *)((longlong)puVar7 + 0xc) = 0x2000;
          *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xd;
          uVar9 = *(longlong *)(param_2 + 8) - (lVar5 + 0xd);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar9;
          uVar6 = 0xff;
          if (uVar9 < 0xff) {
            uVar6 = uVar9;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar6;
        }
      }
      if ((*(uint *)(*param_3 + 0x20) >> 0x1b & 1) != 0) {
        if (*param_2 == '\0') {
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_lock_1807747e0,*(undefined4 *)(param_1 + 0x34)
                               );
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        else {
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xbU) goto LAB_180446d9c;
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar2 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar2 + lVar5) = 0x1006b636f6c0505;
          *(undefined2 *)(lVar2 + 8 + lVar5) = 0x2000;
          *(undefined1 *)(lVar2 + 10 + lVar5) = 0;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 9;
          uVar9 = *(longlong *)(param_2 + 8) - (lVar5 + 9);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar9;
          uVar6 = 0xff;
          if (uVar9 < 0xff) {
            uVar6 = uVar9;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar6;
        }
      }
      if (*(int *)(*param_3 + 0x20) < 0) {
        if (*param_2 == '\0') {
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180742f70,*(undefined4 *)(param_1 + 0x34));
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        else {
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar5 + 10U) goto LAB_180446d9c;
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar2 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar2 + lVar5) = 0x100646e620405;
          *(undefined2 *)(lVar2 + 8 + lVar5) = 0x20;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 8;
          uVar9 = *(longlong *)(param_2 + 8) - (lVar5 + 8);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar9;
          uVar6 = 0xff;
          if (uVar9 < 0xff) {
            uVar6 = uVar9;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar6;
        }
      }
      if ((*(ulonglong *)(*param_3 + 0x20) & 0x1000000000) != 0) {
        if (*param_2 == '\0') {
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_notrack_18077d8b8,
                                *(undefined4 *)(param_1 + 0x34));
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        else {
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xeU) goto LAB_180446d9c;
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar2 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar2 + lVar5) = 0x636172746f6e0805;
          *(undefined4 *)(lVar2 + 8 + lVar5) = 0x1006b;
          *(undefined2 *)(lVar2 + 0xc + lVar5) = 0x20;
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xc;
          uVar9 = *(longlong *)(param_2 + 8) - (lVar5 + 0xc);
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          *(ulonglong *)(param_2 + 8) = uVar9;
          uVar6 = 0xff;
          if (uVar9 < 0xff) {
            uVar6 = uVar9;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar6;
        }
      }
      uVar6 = *(ulonglong *)(*param_3 + 0x20);
      if ((uVar6 >> 0x1c & 1) == 0) {
        if ((uVar6 >> 0x1d & 1) == 0) {
          if ((uVar6 >> 0x1e & 1) == 0) goto LAB_18044723b;
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_repne_180753198,
                                  *(undefined4 *)(param_1 + 0x34));
            iVar3 = (int)uVar4;
            goto joined_r0x0001804471d6;
          }
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (lVar5 + 0xcU < *(ulonglong *)(param_2 + 8)) {
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x656e7065720605;
            *(undefined4 *)(lVar2 + 8 + lVar5) = 0x200001;
            lVar5 = lVar5 + 10;
            goto LAB_180447122;
          }
        }
        else {
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_repe_18076b088,
                                  *(undefined4 *)(param_1 + 0x34));
            iVar3 = (int)uVar4;
            goto joined_r0x0001804471d6;
          }
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (lVar5 + 0xbU < *(ulonglong *)(param_2 + 8)) {
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x100657065720505;
            *(undefined2 *)(lVar2 + 8 + lVar5) = 0x2000;
            *(undefined1 *)(lVar2 + 10 + lVar5) = 0;
            lVar5 = lVar5 + 9;
            goto LAB_180447122;
          }
        }
      }
      else {
        if (*param_2 == '\0') {
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180742df8,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
joined_r0x0001804471d6:
          if (iVar3 < 0) {
            return uVar4;
          }
          goto LAB_18044723b;
        }
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (lVar5 + 10U < *(ulonglong *)(param_2 + 8)) {
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar2 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar2 + lVar5) = 0x1007065720405;
          *(undefined2 *)(lVar2 + 8 + lVar5) = 0x20;
          lVar5 = lVar5 + 8;
LAB_180447122:
          *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5;
          uVar9 = *(longlong *)(param_2 + 8) - lVar5;
          *(ulonglong *)(param_2 + 8) = uVar9;
          param_2[0x28] = '\x02';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          uVar6 = 0xff;
          if (uVar9 < 0xff) {
            uVar6 = uVar9;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar6;
          goto LAB_18044723b;
        }
      }
    }
    else {
      if (*param_2 == '\0') {
        uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_xacquire_180742fe8,
                              *(undefined4 *)(param_1 + 0x34));
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        goto LAB_180446e50;
      }
      lVar5 = *(longlong *)(param_2 + 0x28);
      if (lVar5 + 0xfU < *(ulonglong *)(param_2 + 8)) {
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
        *puVar7 = 0x6975716361780905;
        *(undefined4 *)(puVar7 + 1) = 0x1006572;
        *(undefined2 *)((longlong)puVar7 + 0xc) = 0x2000;
        *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xd;
        uVar9 = *(longlong *)(param_2 + 8) - (lVar5 + 0xd);
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        *(ulonglong *)(param_2 + 8) = uVar9;
        uVar6 = 0xff;
        if (uVar9 < 0xff) {
          uVar6 = uVar9;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        goto LAB_180446e50;
      }
    }
LAB_180446d9c:
    uVar4 = 0x80100009;
  }
  else {
    uVar6 = 0;
    if (*(char *)(lVar5 + 0x70) != '\0') {
LAB_180446540:
      iVar3 = *(int *)(lVar5 + 0x74 + uVar6 * 8);
      bVar11 = *(byte *)(lVar5 + 0x78 + uVar6 * 8);
      uVar12 = (uint)bVar11;
      if (iVar3 == 0) {
LAB_180446564:
        if ((bVar11 & 0xf0) == 0x40) {
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,(&PTR_PTR_180742680)[uVar12 & 0xf],
                                  *(undefined4 *)(param_1 + 0x34));
            iVar3 = (int)uVar4;
          }
          else {
            uVar4 = FUN_1804446f0(param_2,(&PTR_DAT_18076b0d0)[uVar12 & 0xf]);
            iVar3 = (int)uVar4;
          }
          goto joined_r0x000180446c81;
        }
        switch(uVar12) {
        case 0x26:
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180753468,*(undefined4 *)(param_1 + 0x34))
            ;
            iVar3 = (int)uVar4;
            break;
          }
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x2000010073650305;
            *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
            lVar5 = lVar5 + 7;
LAB_180446994:
            *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5;
            uVar8 = *(longlong *)(param_2 + 8) - lVar5;
            param_2[0x28] = '\x02';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            *(ulonglong *)(param_2 + 8) = uVar8;
            uVar9 = 0xff;
            if (uVar8 < 0xff) {
              uVar9 = uVar8;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar9;
            goto LAB_180446d7d;
          }
          goto LAB_180446d9c;
        default:
          if (*param_2 != '\0') {
            uVar9 = *(longlong *)(param_2 + 0x28) + 2;
            if (*(ulonglong *)(param_2 + 8) <= uVar9) goto LAB_180446d9c;
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
            uVar10 = *(longlong *)(param_2 + 8) - uVar9;
            param_2[0x28] = '\x01';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            lVar5 = *(longlong *)(param_2 + 0x48);
            *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar9 + lVar5);
            *(ulonglong *)(param_2 + 8) = uVar10;
            uVar8 = 0xff;
            if (uVar10 < 0xff) {
              uVar8 = uVar10;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar8;
            *(undefined1 *)(uVar9 + lVar5) = 0;
            *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 5;
          }
          uVar4 = FUN_1804499d0(param_2 + 0x10,bVar11,0,*(undefined1 *)(param_1 + 0x49),
                                *(undefined1 *)(param_1 + 0x48));
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          if (*param_2 != '\0') {
            uVar9 = *(longlong *)(param_2 + 0x28) + 2;
            if (*(ulonglong *)(param_2 + 8) <= uVar9) goto LAB_180446d9c;
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)*(longlong *)(param_2 + 0x28);
            uVar10 = *(longlong *)(param_2 + 8) - uVar9;
            param_2[0x28] = '\x01';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            lVar5 = *(longlong *)(param_2 + 0x48);
            *(undefined1 **)(param_2 + 0x48) = (undefined1 *)(uVar9 + lVar5);
            *(ulonglong *)(param_2 + 8) = uVar10;
            uVar8 = 0xff;
            if (uVar10 < 0xff) {
              uVar8 = uVar10;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar8;
            *(undefined1 *)(uVar9 + lVar5) = 0;
            *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -2) = 1;
          }
          if (*(longlong *)(param_2 + 0x28) + 1U <= *(ulonglong *)(param_2 + 0x30)) {
            *(undefined2 *)(*(longlong *)(param_2 + 0x48) + -1 + *(longlong *)(param_2 + 0x28)) =
                 0x20;
            *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
            goto LAB_180446d7d;
          }
          goto LAB_180446d9c;
        case 0x2e:
          if (*param_2 != '\0') {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x2000010073630305;
              *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
              lVar5 = lVar5 + 7;
              goto LAB_180446994;
            }
            goto LAB_180446d9c;
          }
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180753180,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
          break;
        case 0x36:
          if (*param_2 != '\0') {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x2000010073730305;
              *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
              lVar5 = lVar5 + 7;
              goto LAB_180446994;
            }
            goto LAB_180446d9c;
          }
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_18076afd8,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
          break;
        case 0x3e:
          if (*param_2 != '\0') {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x2000010073640305;
              *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
              lVar5 = lVar5 + 7;
              goto LAB_180446994;
            }
            goto LAB_180446d9c;
          }
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_18076b168,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
          break;
        case 100:
          if (*param_2 != '\0') {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x2000010073660305;
              *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
              lVar5 = lVar5 + 7;
              goto LAB_180446994;
            }
            goto LAB_180446d9c;
          }
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180768fe0,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
          break;
        case 0x65:
          if (*param_2 != '\0') {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 9U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x2000010073670305;
              *(undefined1 *)(lVar2 + 8 + lVar5) = 0;
              lVar5 = lVar5 + 7;
              goto LAB_180446994;
            }
            goto LAB_180446d9c;
          }
          uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180742700,*(undefined4 *)(param_1 + 0x34));
          iVar3 = (int)uVar4;
          break;
        case 0xf0:
          cVar1 = *param_2;
          goto joined_r0x000180446949;
        }
      }
      else {
        if (iVar3 != 1) {
          if (iVar3 != 2) {
            return 0x80100004;
          }
          goto LAB_180446564;
        }
        if (uVar12 == 0xf0) {
          cVar1 = *param_2;
joined_r0x000180446949:
          if (cVar1 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_lock_1807747e0,
                                  *(undefined4 *)(param_1 + 0x34));
            iVar3 = (int)uVar4;
            goto joined_r0x000180446c81;
          }
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (lVar5 + 0xbU < *(ulonglong *)(param_2 + 8)) {
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x1006b636f6c0505;
            *(undefined2 *)(lVar2 + 8 + lVar5) = 0x2000;
            *(undefined1 *)(lVar2 + 10 + lVar5) = 0;
            lVar5 = lVar5 + 9;
            goto LAB_180446994;
          }
          goto LAB_180446d9c;
        }
        if (uVar12 == 0xf2) {
          if ((*(ulonglong *)(lVar5 + 0x20) & 0x100000000) != 0) {
            if (*param_2 == '\0') {
              uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_xacquire_180742fe8,
                                    *(undefined4 *)(param_1 + 0x34));
              if ((int)uVar4 < 0) {
                return uVar4;
              }
            }
            else {
              lVar5 = *(longlong *)(param_2 + 0x28);
              if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xfU) goto LAB_180446d9c;
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
              *puVar7 = 0x6975716361780905;
              *(undefined4 *)(puVar7 + 1) = 0x1006572;
              *(undefined2 *)((longlong)puVar7 + 0xc) = 0x2000;
              *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
              *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xd;
              uVar8 = *(longlong *)(param_2 + 8) - (lVar5 + 0xd);
              param_2[0x28] = '\x02';
              param_2[0x29] = '\0';
              param_2[0x2a] = '\0';
              param_2[0x2b] = '\0';
              param_2[0x2c] = '\0';
              param_2[0x2d] = '\0';
              param_2[0x2e] = '\0';
              param_2[0x2f] = '\0';
              *(ulonglong *)(param_2 + 8) = uVar8;
              uVar9 = 0xff;
              if (uVar8 < 0xff) {
                uVar9 = uVar8;
              }
              *(ulonglong *)(param_2 + 0x30) = uVar9;
            }
          }
          if ((*(uint *)(*param_3 + 0x20) >> 0x1e & 1) != 0) {
            if (*param_2 == '\0') {
              uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_repne_180753198,
                                    *(undefined4 *)(param_1 + 0x34));
              if ((int)uVar4 < 0) {
                return uVar4;
              }
            }
            else {
              lVar5 = *(longlong *)(param_2 + 0x28);
              if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xcU) goto LAB_180446d9c;
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x656e7065720605;
              *(undefined4 *)(lVar2 + 8 + lVar5) = 0x200001;
              *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 10;
              uVar8 = *(longlong *)(param_2 + 8) - (lVar5 + 10);
              param_2[0x28] = '\x02';
              param_2[0x29] = '\0';
              param_2[0x2a] = '\0';
              param_2[0x2b] = '\0';
              param_2[0x2c] = '\0';
              param_2[0x2d] = '\0';
              param_2[0x2e] = '\0';
              param_2[0x2f] = '\0';
              *(ulonglong *)(param_2 + 8) = uVar8;
              uVar9 = 0xff;
              if (uVar8 < 0xff) {
                uVar9 = uVar8;
              }
              *(ulonglong *)(param_2 + 0x30) = uVar9;
            }
          }
          if (*(int *)(*param_3 + 0x20) < 0) {
            if (*param_2 == '\0') {
              uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180742f70,
                                    *(undefined4 *)(param_1 + 0x34));
              iVar3 = (int)uVar4;
              goto joined_r0x000180446c81;
            }
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (lVar5 + 10U < *(ulonglong *)(param_2 + 8)) {
              *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
              lVar2 = *(longlong *)(param_2 + 0x48);
              *(undefined8 *)(lVar2 + lVar5) = 0x100646e620405;
              *(undefined2 *)(lVar2 + 8 + lVar5) = 0x20;
              lVar5 = lVar5 + 8;
LAB_180446754:
              *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5;
              uVar8 = *(longlong *)(param_2 + 8) - lVar5;
              param_2[0x28] = '\x02';
              param_2[0x29] = '\0';
              param_2[0x2a] = '\0';
              param_2[0x2b] = '\0';
              param_2[0x2c] = '\0';
              param_2[0x2d] = '\0';
              param_2[0x2e] = '\0';
              param_2[0x2f] = '\0';
              *(ulonglong *)(param_2 + 8) = uVar8;
              uVar9 = 0xff;
              if (uVar8 < 0xff) {
                uVar9 = uVar8;
              }
              *(ulonglong *)(param_2 + 0x30) = uVar9;
              goto LAB_180446d7d;
            }
            goto LAB_180446d9c;
          }
          goto LAB_180446d7d;
        }
        if (uVar12 != 0xf3) goto LAB_180446d7d;
        if ((*(ulonglong *)(lVar5 + 0x20) & 0x200000000) != 0) {
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_xrelease_18076b4c8,
                                  *(undefined4 *)(param_1 + 0x34));
            if ((int)uVar4 < 0) {
              return uVar4;
            }
          }
          else {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xfU) goto LAB_180446d9c;
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
            *puVar7 = 0x61656c6572780905;
            *(undefined4 *)(puVar7 + 1) = 0x1006573;
            *(undefined2 *)((longlong)puVar7 + 0xc) = 0x2000;
            *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
            *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xd;
            uVar8 = *(longlong *)(param_2 + 8) - (lVar5 + 0xd);
            param_2[0x28] = '\x02';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            *(ulonglong *)(param_2 + 8) = uVar8;
            uVar9 = 0xff;
            if (uVar8 < 0xff) {
              uVar9 = uVar8;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar9;
          }
        }
        if ((*(uint *)(*param_3 + 0x20) >> 0x1c & 1) != 0) {
          if (*param_2 == '\0') {
            uVar4 = FUN_180444360(param_2 + 0x10,&PTR_DAT_180742df8,*(undefined4 *)(param_1 + 0x34))
            ;
            if ((int)uVar4 < 0) {
              return uVar4;
            }
          }
          else {
            lVar5 = *(longlong *)(param_2 + 0x28);
            if (*(ulonglong *)(param_2 + 8) <= lVar5 + 10U) goto LAB_180446d9c;
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x1007065720405;
            *(undefined2 *)(lVar2 + 8 + lVar5) = 0x20;
            *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 8;
            uVar8 = *(longlong *)(param_2 + 8) - (lVar5 + 8);
            param_2[0x28] = '\x02';
            param_2[0x29] = '\0';
            param_2[0x2a] = '\0';
            param_2[0x2b] = '\0';
            param_2[0x2c] = '\0';
            param_2[0x2d] = '\0';
            param_2[0x2e] = '\0';
            param_2[0x2f] = '\0';
            *(ulonglong *)(param_2 + 8) = uVar8;
            uVar9 = 0xff;
            if (uVar8 < 0xff) {
              uVar9 = uVar8;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar9;
          }
        }
        if ((*(uint *)(*param_3 + 0x20) >> 0x1d & 1) == 0) goto LAB_180446d7d;
        if (*param_2 != '\0') {
          lVar5 = *(longlong *)(param_2 + 0x28);
          if (lVar5 + 0xbU < *(ulonglong *)(param_2 + 8)) {
            *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
            lVar2 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar2 + lVar5) = 0x100657065720505;
            *(undefined2 *)(lVar2 + 8 + lVar5) = 0x2000;
            *(undefined1 *)(lVar2 + 10 + lVar5) = 0;
            lVar5 = lVar5 + 9;
            goto LAB_180446754;
          }
          goto LAB_180446d9c;
        }
        uVar4 = FUN_180444360(param_2 + 0x10,&PTR_s_repe_18076b088,*(undefined4 *)(param_1 + 0x34));
        iVar3 = (int)uVar4;
      }
joined_r0x000180446c81:
      if (iVar3 < 0) {
        return uVar4;
      }
LAB_180446d7d:
      lVar5 = *param_3;
      bVar11 = (char)uVar6 + 1;
      uVar6 = (ulonglong)bVar11;
      if (*(byte *)(lVar5 + 0x70) <= bVar11) goto LAB_18044723b;
      goto LAB_180446540;
    }
LAB_18044723b:
    uVar4 = 0x100000;
  }
  return uVar4;
}



