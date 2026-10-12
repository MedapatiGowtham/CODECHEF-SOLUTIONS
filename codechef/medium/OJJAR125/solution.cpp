                                                                                                                                                                                                                                                                                                                                                          </div>
                                                                                                                                                                                                                            {activeTabIndex === 0 && (
                                                                                                                                                                                                                                      <div>
                                                                                                                                                                                                                                                  <h2>Personal Information</h2>
                                                                                                                                                                                                                                                              <div className="form-section">
                                                                                                                                                                                                                                                                            <label htmlFor="fullName">Full Name: *</label>
                                                                                                                                                                                                                                                                                          <input type="text" id="fullName" name="fullName" />
                                                                                                                                                                                                                                                                                                      </div>
                                                                                                                                                                                                                                                                                                                  <div className="form-section">
                                                                                                                                                                                                                                                                                                                                <label htmlFor="email">Email Address: *</label>
                                                                                                                                                                                                                                                                                                                                              <input type="email" id="email" name="email" />
                                                                                                                  >
                                                                                                                            2. Work Experience
                                                                                                                                    </button>
                                                                                                                                            <button
                                                                                                                                                      className={`tab-header ${activeTabIndex === 2 ? 'active' : ''}`}
                                                                                                                                                                onClick={() => onTabClick(2)}
                                                                                                                                                                        >
                                                                                                                                                                                  3. Review & Submit
                                                                                                                                                                                          </button>
                                                                                                                                                                                                </div>

                                                                                                                                                                                                      {/* Tab Content Area */}
                                                                                                                                                                                                            <div className="tab-content">
                                                                                                                                                                                                                    {/* Personal Info Tab Content */}
                                                                                                          onClick={() => onTabClick(1)}
                                                                                                className={`tab-header ${activeTabIndex === 1 ? 'active' : ''}`}
                                                                              </button>
                                                                                      <button
                                                            >
                                                                      1. Personal Info
                                                    onClick={() => onTabClick(0)}
                                          className={`tab-header ${activeTabIndex === 0 ? 'active' : ''}`}
                  {/* Tab Headers */}
                        <div className="tab-headers">
                                <button
import React from 'react';

function Tabs({ activeTabIndex, onPrevious, onNext, onTabClick }) {
  const totalTabs = 3;
    const isFirstTab = activeTabIndex === 0;
      const isLastTab = activeTabIndex === totalTabs - 1;

        return (
            <div className="tabs-container">